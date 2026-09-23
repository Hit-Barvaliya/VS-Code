#include <iostream>

long long find_trailing_zeroes(long long n)
{
    long long count = 0;
    while (n >= 5)
    {
        n /= 5;
        count += n;
    }
    return count;
}

int main()
{
    std::cout << "--- Problem 1: Trailing Zeroes in n! ---\n";
    long long n;
    std::cout << "Enter an integer n: ";
    if (std::cin >> n)
    {
        if (n < 0)
        {
            std::cout << "Error: Please enter a non-negative integer.\n";
        }
        else
        {
            long long result = find_trailing_zeroes(n);
            std::cout << "Number of trailing zeroes in " << n << "! is: " << result << "\n";
        }
    }
    else
    {
        std::cout << "Error: Invalid input. Please enter a valid integer.\n";
    }
    return 0;
}
