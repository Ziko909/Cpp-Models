/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:08:48 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 10:20:29 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(numbers);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	// test
	Array<float>	arr1(10);
	Array<float>	arr2(arr1);
	Array<float>	arr3 = arr2;
	for (size_t index = 0; index < arr1.size(); index++)
		arr1[index] = index + 0.25;

	
	arr1[0] = 100.95;
	arr2[0] = 10.8;
	arr3[0] = 50.2;
	std::cout << "Arr1[" << 0 << "] = " << arr1[0] << " and its address is " << &(arr1[0]) << "and its size " << arr1.size() << std::endl; 
	std::cout << "Arr2[" << 0 << "] = " << arr2[0] << " and its address is " << &(arr2[0]) << "and its size " << arr2.size() << std::endl;
	std::cout << "Arr3[" << 0 << "] = " << arr3[0] << " and its address is " << &(arr3[0]) << "and its size " << arr3.size() << std::endl;
	Array<float>	arr4(100);
	arr2 = arr4;
	std::cout << "size of arr2 "<< arr2.size() << std::endl;
}