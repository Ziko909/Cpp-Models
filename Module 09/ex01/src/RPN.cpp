/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 00:17:50 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/30 18:21:25 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <RPN.hpp>
#include <stdexcept>


RPN::RPN() : m_available_op("+-/*")
{
    std::cout << "RPN object has been created" << std::endl;
}

RPN::RPN( const RPN& obj ) : m_available_op("+-/*")
{
    *this = obj;
}

RPN&    RPN::operator = ( const RPN& rhs )
{
    if (this != &rhs)
    {
        this->m_stack = rhs.get_stack();
        this->m_first_operand = rhs.get_first_operand();
        this->m_second_operand = rhs.get_second_operand();
        this->m_result = rhs.get_result();
    }
	return (*this);
}

RPN::~RPN()
{
    std::cout << "RPN object has been destructed" << std::endl;
}

void    RPN::calculate( char op )
{
    switch (op)
    {
        case '+' :
            this->m_result = (this->m_first_operand + this->m_second_operand);
            break ;
        case '-' :
            this->m_result = (this->m_first_operand - this->m_second_operand);
            break ;
        case '*' :
            this->m_result = (this->m_first_operand * this->m_second_operand);
            break ;
        case '/' :
            this->m_result = (this->m_first_operand / this->m_second_operand);
    }
} 

void	RPN::show_result() const
{
	std::cout << "the result is " << this->m_result << std::endl;
}

void    RPN::run( std::string expression )
{
    char	ch;

    for (size_t index = 0; index < expression.length(); index++)
    {
		ch = expression.at(index);
		if (isspace(ch) == true)
			continue ;
        if (isdigit(ch) == true)
            this->m_stack.push(ch - '0');
        else if (this->m_available_op.find(ch) != std::string::npos)
		{
			if (this->m_stack.size() < 2)
				throw std::invalid_argument("bad expression : please use RPN expression");
			this->m_second_operand = this->m_stack.top();
			this->m_stack.pop();
			this->m_first_operand = this->m_stack.top();
			this->m_stack.pop();
			this->calculate(expression.at(index));
			this->m_stack.push(this->m_result);
		}
		else
			throw std::invalid_argument("bad expression : invalid argument");
    }
	if (this->m_stack.size() != 1)
		throw std::invalid_argument("bad expression : please use RPN expression");
	this->show_result();
}

short	RPN::get_first_operand() const
{
    return (this->m_first_operand);
}

short	RPN::get_second_operand() const
{
    return (this->m_second_operand);   
}

std::stack<long, std::vector<long> >	RPN::get_stack() const
{
    return (this->m_stack);
}

long	RPN::get_result() const
{
    return (this->m_result);
}
