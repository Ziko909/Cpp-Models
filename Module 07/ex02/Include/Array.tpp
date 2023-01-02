/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 08:07:31 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 10:03:20 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP


template<typename T>
Array<T>::Array() : m_array(nullptr), m_size(0)
{}

template<typename T>
Array<T>::Array( unsigned int n )
{
	try {
		this->m_array = new T[n];
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		*this = Array<T>();
		return;
	}
	for (size_t index = 0; index < n; index++)
		this->m_array[index] = T();
	this->m_size = n;
}

template<typename T>
Array<T>::Array( const Array& obj ) : m_array(nullptr), m_size(0)
{
	*this = obj;
}

template<typename T>
Array<T>::~Array()
{
	delete this->m_array;
}

template<typename T>
Array<T>&	Array<T>::operator = ( const Array& rhs )
{
	if (this != &rhs)
	{
		T	*tmp;
		try {
				tmp = this->m_array;
				this->m_array = new T[rhs.size()];
				delete tmp;
				this->m_size = rhs.size();
			for (size_t index = 0; index < this->m_size; index++)
				(*this)[index] = rhs[index];
		} catch (std::exception& e) {
			this->m_array = tmp;
			std::cout << e.what() << std::endl;
		}
	}
	return (*this);
}

template<typename T>
T&	Array<T>::operator [] ( size_t index )
{
	if (index >= this->m_size)
		throw std::exception();
	else
		return (this->m_array[index]);
}

template<typename T>
T	Array<T>::operator [] ( size_t index ) const
{
	if (index >= this->m_size)
		throw std::exception();
	else
		return (this->m_array[index]);
}

template<typename T>
size_t	Array<T>::size() const
{
	return (this->m_size);
}

#endif