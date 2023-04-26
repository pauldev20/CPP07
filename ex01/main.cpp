/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:18:11 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/26 16:51:13 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>	// std::cout, std::endl

void	conv_upper(char &c)
{
	c = std::toupper(c);
}

void	conv_lower(char &c)
{
	c = std::tolower(c);
}

int main(void)
{
	char arr[] = {'a', 'b', 'c'};

	for (unsigned long i = 0; i < (sizeof(arr) / sizeof(char)); i++)
		std::cout << arr[i] << std::endl;

	::iter(arr, sizeof(arr) / sizeof(char), &conv_upper);

	for (unsigned long i = 0; i < (sizeof(arr) / sizeof(char)); i++)
		std::cout << arr[i] << std::endl;

	std::cout << std::endl;

	char arr2[] = {'A', 'B', 'C'};

	for (unsigned long i = 0; i < (sizeof(arr2) / sizeof(char)); i++)
		std::cout << arr2[i] << std::endl;

	::iter(arr2, sizeof(arr2) / sizeof(char), &conv_lower);

	for (unsigned long i = 0; i < (sizeof(arr2) / sizeof(char)); i++)
		std::cout << arr2[i] << std::endl;

	return (0);
}
