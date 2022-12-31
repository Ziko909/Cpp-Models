/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:44:56 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/31 00:55:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Conversion.hpp>

Conversion::Conversion() {};

Conversion::Conversion( std::string input ) : m_input(input), m_char(0), m_int(0), m_float(0),m_double(0), m_c(false), m_i(false), m_f(false), m_d(false), print_fraction(false) {}

Conversion::Conversion( const Conversion& obj )
{
	*this = obj;
}

Conversion&	Conversion::operator = ( const Conversion& rhs )
{
	if (this != &rhs)
	{
		this->m_input = rhs.m_input;
		this->m_char = rhs.m_char;
		this->m_int = rhs.m_int;
		this->m_float = rhs.m_float;
		this->m_double = rhs.m_double;
		this->m_c = rhs.m_c;
		this->m_i = rhs.m_i;
		this->m_f = rhs.m_f;
		this->m_d = rhs.m_double;
		this->print_fraction = rhs.print_fraction;
	}
	return (*this);
}

Conversion::~Conversion() {}

void		Conversion::run()
{
	char	type;

	try {
		trim_spaces();
		type = parse();
	} catch (const char *msg) {
		std::cerr << msg << std::endl;
		return ;
	}
	switch (type)
	{
		case 'c' :
			character_case();
			break ;
		case 'i' :
			integer_case();
			break ;
		case 'f' :
			float_case();
			break ;
		case 'd' :
			double_case();
			break ;
		default :
			infinity(type);
			return ;
	}
	this->show();
}

void		Conversion::trim_spaces()
{
	while (this->m_input.front() == ' ')
		this->m_input.erase(0, 1);
	while (this->m_input.back() == ' ')
		this->m_input.pop_back();
}

char	Conversion::parse()
{
	size_t	index;
	size_t	point_pos;
	bool	is_float;
	bool	is_int;

	if (m_input.empty())
		throw "wrong input : please run again";
	if (m_input.length() == 1)
		return (isdigit(this->m_input.front()) ? 'd' : 'c');
	index = 0;
	if (!m_input.compare("-inff") || !m_input.compare("+inff")
		|| !m_input.compare("nanf"))
		return ('z');
	if (!m_input.compare("-inf") || !m_input.compare("+inf")
		|| !m_input.compare("nan"))
		return ('y');
	if (m_input.back() == 'f')
	{
		is_float = true;
		m_input.pop_back();
	}
	if (m_input[index] == '+' || m_input[index] == '-')
		index++;
	point_pos = (m_input.substr(index)).find('.');
	if (point_pos != std::string::npos)
	{
		if ((m_input.substr(index)).find('.', ++point_pos) != std::string::npos)
			throw "wrong input : please run again";
	}
	else
	{
		if (is_float == true)
			throw "wrong input : please run again";
		is_int = true;
	}
	if (strspn(&m_input[index], "0123456789.") != (m_input.substr(index)).length())
		throw "wrong input : please run again";
	if (is_int == true)
		return ('i');
	else if (is_float == true)
		return ('f');
	return ('d');
}


void	Conversion::character_case()
{
	this->m_char = this->m_input.front();
	this->m_int = static_cast<int>(this->m_char);
	this->m_float = static_cast<float>(this->m_char);
	this->m_double = static_cast<double>(this->m_char);
	this->m_c = true;
	this->m_i = true;
	this->m_f = true;
	this->m_d = true;
	this->print_fraction = true;
}

void	Conversion::integer_case()
{
	std::stringstream	str_stream(this->m_input);
	if (!(str_stream >> this->m_int))
	{
		this->m_i = false;
		this->float_case();
		return ;
	}
	this->m_char = static_cast<char>(this->m_int);
	this->m_float = static_cast<float>(this->m_int);
	this->m_double = static_cast<double>(this->m_int);
	this->m_c = (this->m_int <= 127 && this->m_int >= 0);
	this->m_i = true;
	this->m_f = true;
	this->m_d = true;
	if (this->m_input.length() <= 6)
		this->print_fraction = true;
}

void	Conversion::float_case()
{
	std::stringstream	str_stream(this->m_input);
	if (!(str_stream >> this->m_float))
	{
		double_case();
		return ;
	}
	this->m_char = static_cast<char>(this->m_float);
	this->m_int = static_cast<int>(this->m_float);
	this->m_double = static_cast<double>(this->m_float);
	this->m_c = (this->m_float <= 127 && this->m_float >= 0);
	this->m_i = (this->m_float <= INT_MAX && this->m_float >= INT_MIN);
	this->m_f = true;
	this->m_d = true;
}

void	Conversion::double_case()
{
	std::stringstream	str_stream(this->m_input);

	if (!(str_stream >> this->m_double))
	{
		this->m_c = false;
		this->m_i = false;
	}
	this->m_char = static_cast<char>(this->m_double);
	this->m_int = static_cast<int>(this->m_double);
	this->m_float = static_cast<double>(this->m_double);
	this->m_c = (this->m_double <= 127 && this->m_double >= 0);
	this->m_i = (this->m_double <= INT_MAX && this->m_double >= INT_MIN);
	this->m_f = true;
	this->m_d = true;
}

void	Conversion::infinity(char type)
{
	std::cout << "char: " << "impossible" << std::endl;
	std::cout << "int: " << "impossible" << std::endl;
	std::cout << "float: " << this->m_input;
	if (type == 'y')
		std::cout << "f";
	else
		this->m_input.pop_back();
	std::cout << std::endl;
	std::cout << "double: " << this->m_input << std::endl;
}

void	Conversion::show() const
{
	std::cout << "char: ";
	if (this->m_c == true)
	{
		if (isprint(this->m_char) == false)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << this->m_char << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (this->m_i == true)
		std::cout << this->m_int << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	std::cout << this->m_float;
	if (this->print_fraction == true)
		std::cout << ".0";
	std::cout << "f" << std::endl;
	std::cout << "double: " << this->m_double;
	if (this->print_fraction == true)
		std::cout << ".0";
	std::cout << std::endl;
	
}