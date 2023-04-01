/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 00:16:39 by zaabou            #+#    #+#             */
/*   Updated: 2023/04/01 22:49:36 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <sys/_types/_clock_t.h>
#include <sys/_types/_size_t.h>
#include <sys/_types/_time_t.h>
#include <sys/_types/_timeval.h>
#include <vector>
#include <sstream>
#include <iostream>
#include <cmath>
#include <sys/time.h>
#include <exception>

class PmergeMe 
{
    private :
        std::vector<int>    vec;
        std::deque<int>     deq;
		double				vec_time;
		double				deq_time;
		double				st;
		double				ed;
		struct	timeval		start;
		struct	timeval		end;
    public:
        					PmergeMe();
        					PmergeMe( const PmergeMe& obj );
        PmergeMe&   operator = ( const PmergeMe& rhs );
        					~PmergeMe();
        void				parse( std::string arg, int& element ) const;
		void				run( int ac, char **av );
		void				merge_sort_vec(size_t lb, size_t ub);
		void				insertion_sort_vec(size_t lb, size_t ub);
		void				merge_sub_lists_vec(size_t lb, size_t middle, size_t ub);
		void				merge_sort_deq(size_t lb, size_t ub);
		void				insertion_sort_deq(size_t lb, size_t ub);
		void				merge_sub_lists_deq(size_t lb, size_t middle, size_t ub);
		void				vector_case();
		void				deque_case();
		void				show_elements() const;
		void				show_result(char c) const;
		void				save_time(char c);
		std::vector<int>	get_vec() const;
		std::deque<int>		get_deq() const;
		double				get_vec_time() const;
		double				get_deq_time() const;
		double				get_st() const;
		double				get_ed() const;
		struct timeval		get_start() const;
		struct timeval		get_end() const;
};

#endif