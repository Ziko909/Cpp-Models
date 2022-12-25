#ifndef _Bureaucrat_HPP_
#define _Bureaucrat_HPP_

#define	TooLowGrade 151
#define TooHighGrade 0
#include <iostream>
#include <exception>

class	Bureaucrat
{
	private :
		const std::string			mName;
		int							mGrade;
		static const	int			mLowestGrade = 150;
		static const	int			mHighestGrade = 1;

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
					Bureaucrat ( std::string name, int grade );
					Bureaucrat ( const Bureaucrat &obj );
		Bureaucrat&	operator = ( const Bureaucrat &rhs );
					~Bureaucrat ();
		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();
};

std::ostream&	operator << ( std::ostream& out, const Bureaucrat& Brc );
#endif
