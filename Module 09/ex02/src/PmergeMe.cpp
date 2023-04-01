/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:52:35 by zaabou            #+#    #+#             */
/*   Updated: 2023/04/01 22:51:42 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>
#include <cstring>
#include <exception>
#include <sstream>
#include <stdexcept>
#include <sys/_types/_size_t.h>
#include <vector>

PmergeMe::PmergeMe::PmergeMe()
{
    std::cout << "PmergeMe object has been created " << std::endl;
}

PmergeMe::PmergeMe( const PmergeMe& obj )
{
    *this = obj;
}

PmergeMe&	PmergeMe::operator = ( const PmergeMe& rhs )
{
    if (this != &rhs)
    {
		this->vec = rhs.get_vec();
		this->deq = rhs.get_deq();
		this->vec_time = rhs.get_vec_time();
		this->deq_time = rhs.get_deq_time();
		this->st = rhs.get_st();
		this->ed = rhs.get_ed();
		this->start = rhs.get_start(); 
		this->end = rhs.get_end();
    }
    return (*this);
}

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe object has been destructed" << std::endl;
}

void	PmergeMe::parse( std::string arg, int& element ) const
{
   if (arg.front() == '+')
		arg.erase(0, 1);
	if (strspn(arg.c_str(), "0123456789") != arg.length())
			throw std::invalid_argument("bad argument : please use only positive integers as argument");
	std::stringstream	ss(arg);
	if (!(ss >> element))
		throw std::invalid_argument("bad argument : please use only positive integers as argument");
}

void	PmergeMe::run( int ac, char **av )
{
	for (int index = 1; index < ac; index++)
	{
		int	ele;
		try {
			parse(av[index], ele);
			this->vec.push_back(ele);
			this->deq.push_back(ele);
		} catch ( std::exception& e ) {
			throw;
		}
	}
	this->show_result('b');
	this->vector_case();
	this->deque_case();
	this->show_result('a');
}

void	PmergeMe::merge_sort_vec(size_t lb, size_t ub)
{
	if ((ub - lb) <= 7)
		this->insertion_sort_vec(lb, ub);
	else
	{
		size_t middle = ((ub + lb) / 2);
		this->merge_sort_vec(lb, middle);
		this->merge_sort_vec(middle + 1, ub);
		this->merge_sub_lists_vec(lb, middle, ub);
	}
}

void	PmergeMe::insertion_sort_vec(size_t lb, size_t ub)
{
	for (size_t i = lb + 1; i <= ub; i++)
	{
		size_t	j = i;
		while (j > lb && this->vec.at(j - 1) > this->vec.at(j))
		{
			int	tmp = this->vec.at(j - 1);
			this->vec.at(j - 1) = this->vec.at(j);
			this->vec.at(j--) = tmp;
		}
	}
}

void	PmergeMe::merge_sub_lists_vec(size_t lb, size_t middle, size_t ub)
{
	std::vector<int>	tmp;
	size_t	i = lb;
	size_t	j = middle + 1;

	while (i <= middle && j <= ub)
	{
		if (this->vec.at(i) < this->vec.at(j))
			tmp.push_back(this->vec.at(i++));
		else
			tmp.push_back(this->vec.at(j++));
	}
	for (; i <= middle; i++)
		tmp.push_back(this->vec.at(i));
	for (; j <= ub; j++)
		tmp.push_back(this->vec.at(j));
	for (size_t index = 0; lb <= ub; lb++, index++)
		this->vec.at(lb) = tmp.at(index);
}

void	PmergeMe::merge_sort_deq(size_t lb, size_t ub)
{
	if ((ub - lb) <= 7)
		this->insertion_sort_deq(lb, ub);
	else
	{
		size_t middle = ((ub + lb) / 2);
		this->merge_sort_deq(lb, middle);
		this->merge_sort_deq(middle + 1, ub);
		this->merge_sub_lists_deq(lb, middle, ub);
	}
}

void	PmergeMe::insertion_sort_deq(size_t lb, size_t ub)
{
	for (size_t i = lb + 1; i <= ub; i++)
	{
		size_t	j = i;
		while (j > lb && this->deq.at(j - 1) > this->deq.at(j))
		{
			int	tmp = this->deq.at(j - 1);
			this->deq.at(j - 1) = this->deq.at(j);
			this->deq.at(j--) = tmp;
		}
	}
}

void	PmergeMe::merge_sub_lists_deq(size_t lb, size_t middle, size_t ub)
{
	std::deque<int>	tmp;
	size_t	i =	lb;
	size_t	j =	middle + 1;

	while (i <= middle && j <= ub)
	{
		if (this->deq.at(i) < this->deq.at(j))
			tmp.push_back(this->deq.at(i++));
		else
			tmp.push_back(this->deq.at(j++));
	}
	for (; i <= middle; i++)
		tmp.push_back(this->deq.at(i));
	for (; j <= ub; j++)
		tmp.push_back(this->deq.at(j));
	for (size_t index = 0; lb <= ub; lb++, index++)
		this->deq.at(lb) = tmp.at(index);
}

void	PmergeMe::vector_case()
{
	this->save_time('s');
	this->merge_sort_vec(0, this->vec.size() - 1);
	this->save_time('e');
	this->vec_time = ed - st;
}

void	PmergeMe::deque_case()
{
	this->save_time('s');
	this->merge_sort_deq(0, this->vec.size() - 1);
	this->save_time('e');
	this->deq_time = this->ed - this->st;
}

void	PmergeMe::show_elements() const
{
	for (size_t index = 0; index < this->vec.size(); index++)
		std::cout << this->vec.at(index) << " ";
	std::cout << std::endl;
}
		
void	PmergeMe::show_result(char c) const
{
	if (c == 'b')
	{
		std::cout << "before : ";
		this->show_elements();
		return ;
	}
	std::cout << "after : ";
	this->show_elements();
	std::cout << "time to precess a range of " << this->vec.size()
	<< " whith std::vector is " << this->vec_time << " us" << std::endl;
	std::cout << "time to precess a range of " << this->vec.size()
	<< " whith std::deque is " << this->deq_time << " us" << std::endl;
}

void	PmergeMe::save_time(char c)
{
	if (c == 's')
	{
		gettimeofday(&this->start, nullptr);
		this->st = (static_cast<double>(this->start.tv_sec) * pow(static_cast<double>(10), static_cast<double>(6))) +
		(static_cast<double>(this->start.tv_usec));
	}
	else
	{
		gettimeofday(&this->end, nullptr);
		this->ed = (static_cast<double>(this->end.tv_sec) * pow(static_cast<double>(10), static_cast<double>(6))) +
		static_cast<double>(this->end.tv_usec);
	}
}

std::vector<int>	PmergeMe::get_vec() const
{
	return (this->vec);
}

std::deque<int>		PmergeMe::get_deq() const
{
	return (this->deq);
}

double	PmergeMe::get_vec_time() const
{
	return (this->vec_time);
}

double	PmergeMe::get_deq_time() const
{
	return (this->deq_time);
}

double	PmergeMe::get_st() const
{
	return (this->st);
}

double	PmergeMe::get_ed() const
{
	return (this->ed);
}

struct timeval	PmergeMe::get_start() const
{
	return (this->start);
}

struct timeval	PmergeMe::get_end() const
{
	return (this->end);
}