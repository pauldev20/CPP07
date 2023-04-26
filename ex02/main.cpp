/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:24:15 by pgeeser           #+#    #+#             */
/*   Updated: 2023/04/26 17:35:45 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream> // std::cout, std::endl
#include <cstdlib>  // srand, rand
#include <ctime>    // time

int main(void)
{
    {
        Array<int> numbers;
        std::cout << "Elements: " << numbers.size() << std::endl;
        std::cout << "Array: |";
        for (unsigned int i = 0; i < numbers.size(); i++)
            std::cout << numbers[i] << " ";
        std::cout << "|" << std::endl;

        try {
            std::cout << numbers[5] << std::endl;
        } catch(const std::exception& e) {
            std::cerr << e.what() << " -> correct" << std::endl;
        }
    }

    std::cout << std::endl;

    {
        int vals = 400;
        srand(time(NULL));
        Array<int> numbers(vals);
        int* checker = new int[vals];
        std::cout << "Elements: " << numbers.size() << std::endl;
        for (int i = 0; i < vals; i++)
            numbers[i] = checker[i] = rand();

        //seperate scope (testing if asignement or copy influences the original array)
        {
            std::cout << "Testing Seperate Scope:" << std::endl;
            Array<int> tmp = numbers;
            Array<int> test(tmp);

            std::cout << "Before -> TMP: " << tmp[vals / 2] << ", TEST: " << test[vals / 2] << std::endl;
            tmp[vals / 2] = 300;
            std::cout << "After -> TMP: " << tmp[vals / 2] << ", TEST: " << test[vals / 2] << std::endl;
            std::cout << "Before -> TMP: " << tmp[vals / 3] << ", TEST: " << test[vals / 3] << std::endl;
            test[vals / 3] = 672;
            std::cout << "After -> TMP: " << tmp[vals / 3] << ", TEST: " << test[vals / 3] << std::endl;
            std::cout << std::endl;
        }

        // checking if the arrays changed
        for (int i = 0; i < vals; i++)
            if (checker[i] != numbers[i])
                std::cout << "Arrays differ!" << std::endl;

        // exception tests
        try {
            numbers[-2] = 0;
        } catch(const std::exception& e) {
            std::cerr << e.what() << " -> correct" << std::endl;
        }

        try {
            numbers[vals] = 0;
        } catch(const std::exception& e) {
            std::cerr << e.what() << " -> correct" << std::endl;
        }

        // changing arrays
        for (int i = 0; i < vals; i++)
            numbers[i] = rand();

        // checking if arrays are not different
        for (int i = 0; i < vals; i++)
            if (checker[i] == numbers[i])
                std::cout << "Arrays should differ!" << std::endl;

        //print array
        // for (int i = 0; i < vals; i++)
        //     std::cout << numbers[i] << " ";
        // std::cout << std::endl;

        delete[] checker;
    }

    return 0;
}
