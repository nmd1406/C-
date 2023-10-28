#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::cout << (n % 100 == 86) << '\n';
    }

    return 0;
}