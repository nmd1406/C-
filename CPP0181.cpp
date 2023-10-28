#include<iostream>

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;

    return gcd(b % a, a);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long a{};
        long long x{};
        long long y{};
        std::cin >> a >> x >> y;

        long long temp{gcd(x, y)};
        for(long long i{1}; i <= temp; ++i)
            std::cout << a;

        std::cout << '\n';
    }
    return 0;
}