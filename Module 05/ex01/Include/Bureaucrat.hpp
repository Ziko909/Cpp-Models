/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:55:49 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/26 18:21:38 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define	TooLowGrade 151
#define TooHighGrade 0

#include <Form.hpp>
#include <iostream>
#include <exception>

class		Form;

class	Bureaucrat
{
	private :
		const std::string	mName;
		unsigned int		mGrade;
		static const int	mLowestGrade = 150;
		static const int	mHighestGrade = 1;

	class GradeTooHighException : public std::exception
	{
		private :
			std::string	mMsg;

		public :
			
			GradeTooHighException() ;
			~GradeTooHighException() throw();
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			std::string	mMsg;

		public :
	
			GradeTooLowException();
			~GradeTooLowException() throw();
			const char* what() const throw();
	};

	public	:
						Bureaucrat ();
						Bureaucrat ( std::string name, unsigned int grade );
						Bureaucrat ( const Bureaucrat& obj );
		Bureaucrat&		operator = ( const Bureaucrat& rhs );
						~Bureaucrat ();
		std::string		getName() const;
		unsigned int	getGrade() const;
		void			increaseGrade();
		void			decreaseGrade();
		void			signForm( Form& form ) const;
};

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& Brc );
#endif
