/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:02:44 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/31 00:56:26 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <string>
#include <iostream>
#include <sstream>

class	Conversion
{
	private :
		std::string			m_input;
		char				m_char;
		int					m_int;
		float				m_float;
		double				m_double;
		bool				m_c;
		bool				m_i;
		bool				m_f;
		bool				m_d;
		bool				print_fraction;
					
	public :
					Conversion();
					Conversion( std::string input );
					Conversion( const Conversion& obj );
		Conversion&	operator = ( const Conversion& rhs );
					~Conversion();
		void		run();
		void		trim_spaces();
		char		parse();
		void		character_case();
		void		integer_case();
		void		float_case();
		void		double_case();
		void		infinity(char type);
		void		show() const;
};

#endif