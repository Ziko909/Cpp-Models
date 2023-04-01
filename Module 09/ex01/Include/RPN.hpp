/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 00:19:07 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/30 00:31:28 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <vector>
#include <string>
#include <_ctype.h>
#include <stdexcept>
#include <iostream>
#include <exception>

class RPN
{
    private :
        std::stack<long, std::vector<long> >    m_stack;
        short									m_first_operand;
        short									m_second_operand;
        long									m_result;
        std::string								m_available_op;
    public :
                								RPN();  
                								RPN( const RPN& obj );
        RPN&    								operator = ( const RPN& rhs );
                								~RPN();
		void									calculate( char op );
		void									show_result() const;
        void									run( std::string expression );
		short									get_first_operand() const;
		short									get_second_operand() const;
		std::stack<long, std::vector<long> >	get_stack() const;
		long									get_result() const;

  
};

#endif