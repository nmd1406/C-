#include<iostream>

long gcd(long a, long b)
{
    if(a == 0 || b == 0)
        return a + b;

    return gcd(b % a, a);
}

long lcm(long a, long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long a{};
        long b{};
        std::cin >> a >> b;

        std::cout << lcm(a, b) << ' ' << gcd(a, b) << '\n';
    }

    return 0;
}