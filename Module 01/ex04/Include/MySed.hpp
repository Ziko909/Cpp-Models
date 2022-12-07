/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:26:55 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 00:53:36 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MY_SED_H
#define MY_SED_H

#include <iostream>
#include <fstream>
#include <string>
class MySed
{
	private:
		std::ifstream	_fin;
		std::ofstream	_fout;
		std::string		_s1;
		std::string		_s2;
		std::string		_tmp;
		std::string		_line;
	public:
				MySed( std::string fin, std::string s1, std::string s2 );
				~MySed();
		void	read_file( void );
		void	replace_word( void );
		void	write_to_file( void );
};

#endif
