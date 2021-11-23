#include <iostream>

/**
* Prints the string in console.
* @param [in] line - string to be printed out
*
*/
void printLine(std::string line)
{
    std::cout << line << "\n";
}

/**
* Swaps int values a and b.
* @param [in/out] a - int value
* @param [in/out] b - int value
*/
void swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}

int main()
{
    printLine("Let's try to swap elements:\n");
    int a{ 3 };
    int b{ 4 };

    std::cout << "Initial values:\n";
    std::cout << "\t - a = " << a << "\n";
    std::cout << "\t - b = " << b << "\n";

    std::cout << "SWAP!\n";
    swap(a, b);
    std::cout << "\t - a = " << a << "\n";
    std::cout << "\t - b = " << b << "\n";
    
    return 0;
}