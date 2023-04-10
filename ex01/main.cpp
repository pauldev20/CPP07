/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:18:11 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/10 16:26:51 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	conv_upper(char &c)
{
	c = std::toupper(c);
}

int main(void)
{
	char arr[] = {'a', 'b', 'c'};

	for (unsigned long i = 0; i < (sizeof(arr) / sizeof(char)); i++)
		std::cout << arr[i] << std::endl;
	std::cout << std::endl;

	::iter(arr, sizeof(arr) / sizeof(char), &conv_upper);

	for (unsigned long i = 0; i < (sizeof(arr) / sizeof(char)); i++)
		std::cout << arr[i] << std::endl;
	std::cout << std::endl;

	return (0);
}
