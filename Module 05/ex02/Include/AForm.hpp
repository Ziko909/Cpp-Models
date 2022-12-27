/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:14:15 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 01:56:10 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <Bureaucrat.hpp>
#include <string>
#include <iostream>

class	Bureaucrat;

class	AForm
{
	private :
		const std::string	mName;
		bool				mStatus;
		const unsigned int	mSignGrade;
		const unsigned int	mExecGrade;
		static const int	mLowestGrade = 150;
		static const int	mHighestGrade = 1;

	public	:
						AForm();
						AForm(std::string name, unsigned int signGrade, unsigned int execGrade);
						AForm( const AForm& obj );
		AForm&			operator = ( const AForm& rhs );
		virtual			~AForm();
		std::string		getName( void ) const;
		bool			getStatus( void ) const;
		unsigned int	getSignGrade( void ) const;
		unsigned int	getExecGrade( void ) const;
		void			beSigned( const Bureaucrat& brc );
		virtual	void	execute( Bureaucrat const & executor ) const = 0;
	class	GradeTooLowException : public std::exception
	{
		private :
			std::string	mMsg;

		public :
			GradeTooLowException( std::string msg );
			~GradeTooLowException() throw();
			const char* what() const throw();
	};

	class	FormNotSignedException : public std::exception
	{
		private :
			std::string	mMsg;

		public :
			FormNotSignedException( std::string msg );
			~FormNotSignedException() throw();
			const char* what() const throw();
	};
};

std::ostream&	operator << ( std::ostream& out, const AForm& form );

#endif
