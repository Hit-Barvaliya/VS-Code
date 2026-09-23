#include <iostream>

struct GCDResult
{
    long long g;
    long long x;
    long long y;
};

GCDResult extended_gcd(long long a, long long b)
{
    if (b == 0)
    {
        return {a, 1, 0};
    }

    GCDResult res = extended_gcd(b, a % b);
    long long x = res.y;
    long long y = res.x - (a / b) * res.y;

    return {res.g, x, y};
}
int main()
{
    std::cout << "--- Problem 2: Extended Euclidean Algorithm ---\n";
    std::cout << "Enter integer a: ";
    long long a, b;
    if (std::cin >> a)
    {
        std::cout << "Enter integer b: ";
        if (std::cin >> b)
        {
            GCDResult result = extended_gcd(a, b);

            std::cout << "\nResults:\n";
            std::cout << "g (GCD) = " << result.g << "\n";
            std::cout << "x = " << result.x << "\n";
            std::cout << "y = " << result.y << "\n";
            std::cout << "Verification: " << a << "*(" << result.x << ") + " << b << "*(" << result.y << ") = " << (a * result.x + b * result.y) << "\n";
        }
        else
        {
            std::cout << "Error: Invalid input. Please enter valid integers.\n";
        }
    }
    else
    {
        std::cout << "Error: Invalid input. Please enter valid integers.\n";
    }

    return 0;
}
