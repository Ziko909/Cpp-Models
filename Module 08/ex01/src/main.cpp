/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:00:32 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 10:02:55 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <list>

void	out_of_range()
{
	std::cout << "                  test : add number after fullness the Span" << std::endl;
	Span	s(2);
	std::cout << "adding two numbers to the Span " << std::endl;
	s.addNumber(20);
	s.addNumber(13);
	std::cout << "Span is full now" << std::endl;
	s.addNumber(1);
	std::cout << "work" << std::endl;
}

void	no_span()
{
	std::cout << "			test : no span" << std::endl;
	Span	sp;
	try {
		std::cout << "			Call longestSpan() in empty Span " << std::endl;
		sp.longestSpan();
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in no_span() " << e.what() << std::endl;
	}
	try {
		std::cout << "			Call shortestSpan() in empty Span " << std::endl;
		sp.shortestSpan();
	} catch (std::exception& e){
		std::cerr << "exception has been caught in no_span() " << e.what() << std::endl;
	}
	
}

void	show_span()
{
	std::cout << "			test : Span  " << std::endl;
	Span	sp(100000);
	for (size_t	index = 0; index < 200000; index += 2)
		sp.addNumber(index);
	std::cout << "the longestSpan " << sp.longestSpan() << std::endl;
	std::cout << "the shortestSpan " << sp.shortestSpan() << std::endl;
}

void	fillSpan()
{
	std::cout << "				test : fill Span With Range of elements " << std::endl;
	std::vector<int>	vec;
	Span				sp(100000);
	for (size_t i = 0; i < 100000; i++)
		vec.push_back(i);
	sp.add_range(vec.begin(), vec.end());
	std::cout << "Span is full now" << std::endl;
	try {
		std::cout << "try to add another range after fullness the Span " << std::endl;
		std::list<int>	list;
		list.push_front(15);	
		sp.add_range(list.begin(), list.end());
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in fillSpan() " << e.what() << std::endl;
	}
}

int main()
{
	try {
		out_of_range();
	} catch (std::exception& e){
		std::cerr << "exception has been cought in main() " << e.what() << std::endl;
	}
	std::cout << std::endl;
	fillSpan();
	std::cout << std::endl;
	no_span();
	std::cout << std::endl;
	show_span();
}