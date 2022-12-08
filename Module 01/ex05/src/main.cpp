/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:17:52 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 00:34:56 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( void )
{
	Harl	obj;

	obj.complain("debug");
	obj.complain("info");
	obj.complain("warning");
	obj.complain("error");
}