/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:30:13 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:30:14 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include <AForm.hpp>
#include <cstdlib>
#include <ctime>

class	RobotomyRequestForm : public AForm
{
	private :
		std::string	mTarget;

	public :
								RobotomyRequestForm();
								RobotomyRequestForm(std::string name);
								RobotomyRequestForm( const RobotomyRequestForm& obj );
		RobotomyRequestForm&	operator = ( const RobotomyRequestForm& rhs );
								~RobotomyRequestForm();
		std::string				getTarget() const;
		void					execute(Bureaucrat const & executor) const;
};
#endif