/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcauchet <jcauchet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:20:06 by jcauchet          #+#    #+#             */
/*   Updated: 2022/10/17 18:49:57 by jcauchet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const &src);
	Array &operator=(Array const &rhs);
	T &operator[](unsigned int index);
	~Array();

	unsigned int const &size() const;
	void	createNbList() const;
	void	printArray() const;
	void	editIndex(unsigned int index, unsigned int value);
private:
	T *_array;
	unsigned int _arraySize;
};

// Implementation

template<typename T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->_array[i] = 0;
	this->_arraySize = n;
}

template<typename T> // copy constructor
Array<T>::Array(Array const &src)
{
	if (src._array)
	{
		this->_array = new T[src._arraySize];
		for (unsigned int i = 0; i < src._arraySize; i++)
			this->_array[i] = src._array[i];
	}
	else
		this->_array = NULL;
	this->_arraySize = src._arraySize;
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		if (this->_array && rhs._array)
			for (int i = 0; i < this->_arraySize; i++)
				this->_array[i] = rhs._array[i];
		this->_arraySize = rhs._arraySize;
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned index)
{
	if (index > this->_arraySize - 1)
		throw std::exception();
	else
		return this->_array[index];
}

template<typename T>
unsigned int	const &Array<T>::size() const
{
	return this->_arraySize;
}

template<typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete [] this->_array;
}

template<typename T>
void	Array<T>::createNbList() const
{
	if (this->_array)
	{
		for (unsigned int i = 0; i < this->_arraySize; i++)
			this->_array[i] = i;
	}
	else
		std::cout << "Impossible to assign values in an inexisting array!\n";
}

template<typename T>
void	Array<T>::printArray() const
{
	unsigned int i;
	if (this->_array)
	{
		for (i = 0; i < this->_arraySize - 1; i++)
			std::cout << this->_array[i] << " ";
		std::cout << this->_array[i] << std::endl;
	}
	else
		std::cout << "Impossible to print array because it is inexisting!\n";
}

template<typename T>
void	Array<T>::editIndex(unsigned int index, unsigned int value)
{
	if (index >= 0 || index <= this->_arraySize - 1)
		this->_array[index] = value;
}
