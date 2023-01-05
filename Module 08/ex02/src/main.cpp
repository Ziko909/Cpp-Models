/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:00:32 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 10:46:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>
#include <iostream>

int main()
{
	MutantStack<int>	mystack;

	mystack.push(15);
	mystack.push(1);
	mystack.push(35);
	mystack.push(14);
	mystack.push(230);
	std::cout << "the size now is :" << mystack.size() << std::endl;
	std::cout << "top element : " << mystack.top() << std::endl;
	mystack.pop();
	std::cout << "pop one element " << std::endl;
	std::cout << "top element : " << mystack.top() << std::endl;
	std::cout << "the size now is :" << mystack.size() << std::endl;
	MutantStack<int>::iterator	itb = mystack.begin();
	MutantStack<int>::iterator	ite = mystack.end();

	std::cout << "show my stack using iterator :" << std::endl;
	for (MutantStack<int>::iterator it = itb; it != ite; it++)
		std::cout << *it << std::endl;
	MutantStack<int> c(mystack);
	std::cout << "copy stack to another :" << std::endl;
	for (MutantStack<int>::iterator it = c.begin(); it != c.end(); it++)
		std::cout << *it << std::endl;
	return (0);
}