/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:30:19 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:30:21 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
#define	PRESIDENTIALPARDONFORM_HPP

#include <AForm.hpp>

class	PresidentialPardonForm : public AForm
{
	private :
		std::string	mTarget;

	public :
								PresidentialPardonForm();
								PresidentialPardonForm(std::string name);
								PresidentialPardonForm( const PresidentialPardonForm& obj );
		PresidentialPardonForm&	operator = ( const PresidentialPardonForm& rhs );
								~PresidentialPardonForm();
		std::string				getTarget( void ) const;
		void					execute(Bureaucrat const & executor) const;
};
#endif