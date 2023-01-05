/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:12:52 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 10:44:45 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MUTANTSTACK_HPP
#define	MUTANTSTACK_HPP

#include <stack>

template<typename T>
class	MutantStack : public std::stack<T>
{
	public :
		typedef	typename std::stack<T>::container_type::iterator	iterator;
		MutantStack();	
		MutantStack( const MutantStack& obj );	
		MutantStack&	operator = ( const MutantStack& rhs );
		~MutantStack();
		iterator		begin();
		iterator		end();	
};

#include <MutantStack.tpp>

#endif