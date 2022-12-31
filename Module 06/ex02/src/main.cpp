/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:56:08 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/31 01:09:49 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base	*generate_object(void)
{
	int r_number = 0;

	std::cout << "generate random object function " << std::endl;
	srand(time(NULL));
	r_number = rand();
	switch (r_number % 3)
	{
		case 0:
			std::cout << "the object of class A is generated " << std::endl;
			return (new A());
		case 1:
			std::cout << "the object of class B is generated " << std::endl;
			return (new B());
		case 2:
			std::cout << "the object of class C is generated " << std::endl;
			return (new C());
		default:
			break;
	}
	return (0);
}

void	identify(Base* p)
{
	std::cout << "\t\t\tPointer Test : " << std::endl;
	if (dynamic_cast<A*> (p))
		std::cout << "the generated object From Class A " << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "the generated object From Class B " << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "the generated object From Class C " << std::endl;
}

void	identify(Base& p)
{
	std::cout << "\t\t\tReference Test : " << std::endl;
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "the generated object From Class A" << std::endl;
		return ;
	} catch (std::bad_cast& e){ }
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "the generated object From Class B" << std::endl;
		return ;
	} catch (std::bad_cast& e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "the generated object From Class C" << std::endl;
	} catch (std::bad_cast& e) {}
}

int main()
{
	try {
			Base *base = generate_object();
			identify(base);
			identify(*base);
			delete base;
			return (EXIT_SUCCESS);
	} catch (std::exception& e){
		std::cerr << "exception in the main : " << e.what() << std::endl;
	}
}