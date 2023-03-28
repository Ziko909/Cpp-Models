/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:13:35 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/27 03:50:04 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <fstream>

BitcoinExchange::BitcoinExchange() : m_db_file("data.csv")
{
	std::cout << "new BitcoinExchange has been created" << std::endl;
	if (this->m_db_file.is_open() == false)
		throw std::runtime_error("can't open the database file");
	try {
		this->load_database(); 
	} catch ( std::exception& e ) {
		throw;
	}
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& obj ) : m_db_file("data.csv")
{
	std::cout << "new BitcoinExchange has been created by the copy constructor" << std::endl;
	*this = obj;
}

BitcoinExchange&	BitcoinExchange::operator = ( const BitcoinExchange& rhs )
{
	if (this != &rhs)
		this->m_database = rhs.get_database();
    return (*this);
}

BitcoinExchange::~BitcoinExchange() 
{
    std::cout << "BitcoinExchange object Has Been Destroyed" << std::endl;
	if (this->m_db_file.is_open() == true)
		this->m_db_file.close();
}

void	BitcoinExchange::check_row( std::string& line, char delimiter, std::string& date, double& value ) const
{
	std::string	field;
	size_t		sep_index;

	sep_index = line.find(delimiter);
	if (sep_index == std::string::npos)
	{
		if (delimiter == '|')
			throw std::invalid_argument("bad row in the input file");
		else
			throw std::invalid_argument("bad row in the database file");
	}
	field = line.substr(0, sep_index);
	field.erase(std::remove(field.begin(), field.end(), ' '), field.end());
	try {
		 check_date(field, delimiter);
		 date = field;
	} catch ( std::exception& e ) {
		throw;
	}
	field = line.substr(sep_index + 1);
	field.erase(std::remove(field.begin(), field.end(), ' '), field.end());
	try {
		check_value(field, delimiter, value);
	} catch ( std::exception& e ) {
		throw;
	}
}

void	BitcoinExchange::check_date( std::string& date, char delimiter ) const
{
	std::stringstream	ss(date);
	std::string			tmp;
	short				mounth;
	short				day;

	std::getline(ss, tmp, '-');
	if (strspn(tmp.c_str(), "0123456789") != tmp.length())
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the date column in the input file");
		else
			throw std::invalid_argument("error in the date column in the database");
	}
	std::getline(ss, tmp, '-');
	if (strspn(tmp.c_str(), "0123456789") != tmp.length())
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the date column in the input file");
		else
			throw std::invalid_argument("error in the date column in the database");
	}
	if (!(std::stringstream(tmp) >> mounth))
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the date column in the input file");
		else
			throw std::invalid_argument("error in the date column in the database");
	}
	if (mounth > 12)
	{
		if (delimiter == '|')
			throw std::out_of_range("error in the date column in the input file");
		else
			throw std::out_of_range("error in the date column in the database");
	}
	std::getline(ss, tmp);
	if (strspn(tmp.c_str(), "0123456789") != tmp.length())
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the date column in the input file");
		else
			throw std::invalid_argument("error in the date column in the database");
	}
	if (!(std::stringstream(tmp) >> day))
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the date column in the input file");
		else
			throw std::invalid_argument("error in the date column in the database");
	}
	if (day > 31)
	{
		if (delimiter == '|')
			throw std::out_of_range("error in the date column in the input file");
		else
			throw std::out_of_range("error in the date column in the database");
	}
}

void	BitcoinExchange::check_value( std::string& value, char delimiter, double& val ) const
{
	short	sign = 1;
	if (value.front() == '-')
		sign *= -1;
	if (value.front() == '+' || value.front() == '-')
		value.erase(0, 1);
	if (strspn(value.c_str(), "0123456789.") != value.length())
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the value column in the input file");
		else
			throw std::invalid_argument("error in the exchange_rate column in the database");	
	}
	if (value.find('.') != value.rfind('.'))
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the value column in the input file");
		else
			throw std::invalid_argument("error in the exchange_rate column in the database");
	}
	std::stringstream	ss(value);
	if (!(ss >> val))
	{
		if (delimiter == '|')
			throw std::invalid_argument("error in the value column in the input file");
		else
			throw std::invalid_argument("error in the exchange_rate column in the database");
	}
	val *= sign; 
	if (delimiter == '|' && (val < 0 || val > 1000))
		throw std::out_of_range("error the value is out_of_range : range is [0->1000]");
}

void	BitcoinExchange::load_database()
{
	std::string	tmp;
	std::string	date;
	double		value;

	std::getline(this->m_db_file, tmp, ',');
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	if (tmp.compare("date") != 0)
		throw std::invalid_argument("error in the date column in the database");
	std::getline(this->m_db_file, tmp);
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	if (tmp.compare("exchange_rate") != 0)
		throw std::invalid_argument("error in the exchange_rate column in the database");
	while (std::getline(this->m_db_file, tmp))
	{
		try {
			this->check_row(tmp, ',', date, value);
			this->m_database.insert(std::make_pair(date, value));
		} catch ( std::exception& e ) {
			throw;
		}
	}
}

void	BitcoinExchange::run( std::string input_db ) const
{
    std::ifstream	input_file(input_db);
	std::string		tmp;
	std::string		date;
	double			value;

	if (input_file.is_open() == false)
		throw std::runtime_error("error the input file can't be opened");
	std::getline(input_file, tmp, '|');
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	if (tmp.compare("date") != 0)
		throw std::invalid_argument("error in the date column in the input file");
	std::getline(input_file, tmp);
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	if (tmp.compare("value") != 0)
		throw std::invalid_argument("error in the value column in the input file");
	while (std::getline(input_file, tmp))
	{
		try {
			this->check_row(tmp, '|', date, value);
			this->show_result(date, value);
		} catch ( std::exception& e ) {
			std::cout << e.what() << std::endl;
		}
	}
}

void	BitcoinExchange::show_result( std::string& date, double& value ) const
{
	std::map<std::string, double>::const_iterator	it;
	double											result;
	it = this->m_database.lower_bound(date);
	if ((it == this->m_database.begin()) && (it->first != date))
	{
		std::cout << "error " << date << " date not found in the database"	<< std::endl;
		return ;
	}
	if (it == this->m_database.end())
		std::cout << "error " << date << " date not found in the database"	<< std::endl;
	else 
	{
		if (it->first != date)
			it = std::prev(it);
		result = value * it->second;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}


std::map<std::string, double>	BitcoinExchange::get_database() const
{
	return (this->m_database);
}