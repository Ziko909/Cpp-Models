/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:13:56 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/27 03:39:55 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <algorithm>
#include <string>
#include <sstream>

class BitcoinExchange {
    private :
        std::map<std::string, double>	m_database;
        std::ifstream                   m_db_file;
    public :
                                        BitcoinExchange();
                                        BitcoinExchange( const BitcoinExchange& obj );
        BitcoinExchange&                operator = ( const BitcoinExchange& rhs ); 
                                        ~BitcoinExchange();
        void							check_row( std::string& line, char delimiter, std::string& date, double& value ) const;
        void                            check_date( std::string& date, char delimiter ) const;
        void                            check_value( std::string& value, char delimiter, double& val) const;
        void                            load_database();
        void						    run( std::string input_db ) const;
        void                          	show_result( std::string& date, double& value ) const;
        std::map<std::string, double>	get_database() const;
};

#endif