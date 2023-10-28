#include<iostream>

constexpr long long mod = 1e9 + 7;

long long fibonacci(int n)
{
    int a{};
    int b{1};
    int c{};
    for(int i{2}; i <= n; ++i)
    {
        c = (a + b) % mod;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::cout << fibonacci(n) << '\n';
    }

    return 0;
}