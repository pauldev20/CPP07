#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(void)
{
    Array<int> numbers1;
    std::cout << "Testing Empty Array:" << std::endl;
    std::cout << "Created " << numbers1.size() << " Elements" << std::endl;
    std::cout << "Array: |";
    for (unsigned int i = 0; i < numbers1.size(); i++)
        std::cout << numbers1[i] << " ";
    std::cout << "|" << std::endl;
    std::cout << std::endl;

    Array<int> numbers(MAX_VAL);
    std::cout << "Testing " << MAX_VAL << " Elements:" << std::endl;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "Created " << numbers.size() << " Elements!" << std::endl;
    std::cout << std::endl;

    //Seperate Scope (Testiong if asignement or ciopy influences the original array)
    {
        std::cout << "Testing Seperate Scope:" << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);

        std::cout << "Before -> TMP: " << tmp[5] << ", TEST: " << test[5] << std::endl;
        tmp[5] = 300;
        std::cout << "After -> TMP: " << tmp[5] << ", TEST: " << test[5] << std::endl;
        std::cout << "Before -> TMP: " << tmp[30] << ", TEST: " << test[30] << std::endl;
        test[30] = 672;
        std::cout << "After -> TMP: " << tmp[30] << ", TEST: " << test[30] << std::endl;
        std::cout << std::endl;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "Arrays differ!" << std::endl;
            return (1);
        }
    }

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " -> correct" << std::endl;
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " -> correct" << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] == numbers[i])
        {
            std::cerr << "Arrays should differ!" << std::endl;
            return (1);
        }
    }

    delete[] mirror;
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // system("leaks array");

    return 0;
}