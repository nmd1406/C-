#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long a{};
        long long b{};
        long long c{};
        std::cin >> a >> b >> c;

        std::cout << 1ll * ((1ll * (a % c) * (b % c)) % c) << '\n';
    }

    return 0;
}