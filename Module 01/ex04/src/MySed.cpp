/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:49:28 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/07 03:17:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MySed.hpp>

MySed::MySed( std::string fin, std::string s1, std::string s2 )
{
	if (s1.compare("") == 0)
	{
		std::cerr << "cannot replace end of file" << std::endl;
		exit(EXIT_FAILURE);
	}
	_fin.open(fin);
	if (_fin.is_open() == false)
	{
		std::cerr << "The input file cannot be opened" << std::endl;
		exit(EXIT_FAILURE);
	}
	_fout.open(fin + ".replace");
	if (_fout.is_open() == false)
	{
		std::cerr << "The output file cannot be opened" << std::endl;
		exit(EXIT_FAILURE);
	}
	_s1 = s1;
	_s2 = s2;
}

MySed::~MySed()
{
	if (_fin.is_open() == true)
		_fin.close();
	if (_fout.is_open() == true)
		_fout.close();
}

void	MySed::read_file( void )
{
	while (getline(_fin, _line))
	{
		_tmp.append(_line);
		if (_fin.eof() == false)
			_tmp.push_back('\n');
		else
			break;
	}
}

void	MySed::replace_word( void )
{
	size_t	pos;

	pos = 0;
	while (true)
	{
		pos = _tmp.find(_s1, pos);
		if (pos == std::string::npos)
			break ;
		_tmp.erase(pos, _s1.length());
		_tmp.insert(pos, _s2);
		pos += _s2.length();
	}
}

void	MySed::write_to_file( void )
{
	_fout << _tmp;
}



