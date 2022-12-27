/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 04:23:19 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:30:58 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>

class	Intern
{
	public :
				Intern();
				Intern( const Intern& obj );
		Intern&	operator = ( const Intern& rhs );
				~Intern();
		AForm*	makeForm( std::string formName, std::string target ) const;
		AForm*	createPPF( std::string target ) const;
		AForm*	createSCF( std::string target ) const;
		AForm*	createRRF( std::string target ) const;
};
typedef	AForm*	(Intern::*funcptr)(std::string) const; 
#endif