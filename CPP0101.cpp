#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while (testCase--)
    {
        long long n{};
        std::cin >> n;

        long long sum{ (1 + n) * n / 2 };

        std::cout << sum << '\n';
    }
    
    return 0;
}