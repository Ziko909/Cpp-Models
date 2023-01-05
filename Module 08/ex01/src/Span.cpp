/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:00:34 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 09:49:40 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : _maxSize(0) {}

Span::Span( unsigned int n ) : _maxSize(n) {}

Span::Span( const Span& obj )
{
	*this = obj; 
}

Span&	Span::operator = ( const Span& rhs )
{
	this->_maxSize = rhs._maxSize;
	this->_vec = rhs._vec;
	return (*this);
}

Span::~Span(){};

void	Span::addNumber(int number)
{
	if (this->_vec.size() == this->_maxSize)
		throw std::out_of_range("the Span is full");
	else
		this->_vec.push_back(number);
}

int	Span::longestSpan()
{
	if (this->_vec.size() == 1
		|| this->_vec.empty() == true)
		throw std::exception();
	int min = *(std::min_element(this->_vec.begin(), this->_vec.end()));
	int	max = *(std::max_element(this->_vec.begin(), this->_vec.end()));
	return (max - min);
}

int	Span::shortestSpan()
{
	if (this->_vec.size() == 1
		|| this->_vec.empty() == true)
			throw std::exception();
	std::vector<int>	cp(this->_vec);
	std::sort(cp.begin(), cp.end(), std::greater<int>());
	std::vector<int>::iterator	it;
	int	shortSpan = *(cp.begin()) - *(cp.begin() + 1);
	for (it = cp.begin(); it != (cp.end() - 1); it++)
	{
		int	distance = (*it - *(it + 1));
		if (distance < shortSpan)
			shortSpan = distance;
	}
	return (shortSpan);
}