/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:14:15 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/26 18:32:14 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include <Bureaucrat.hpp>
#include <string>
#include <iostream>

class	Bureaucrat;

class	Form
{
	private :
		const std::string	mName;
		bool				mStatus;
		const unsigned int	mSignGrade;
		const unsigned int	mExecGrade;
		static const int	mLowestGrade = 150;
		static const int	mHighestGrade = 1;

	class GradeTooHighException : public std::exception
	{
		private :
			std::string	mMsg;

		public :
			
			GradeTooHighException( std::string msg ) ;
			~GradeTooHighException() throw();
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private :
			std::string	mMsg;

		public :

			GradeTooLowException( std::string msg );
			~GradeTooLowException() throw();
			const char* what() const throw();
	};

	public	:
						Form();
						Form(std::string name, unsigned int signGrade, unsigned int execGrade);
						Form( const Form& obj );
		Form&			operator = ( const Form& rhs );
						~Form();
		std::string		getName( void ) const;
		bool			getStatus( void ) const;
		unsigned int	getSignGrade( void ) const;
		unsigned int	getExecGrade( void ) const;
		void			beSigned( const Bureaucrat& brc );
};

std::ostream&	operator << ( std::ostream& out, const Form& form );

#endif
