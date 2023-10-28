#include<iostream>
#include<cmath>

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;

    return gcd(b % a, a);
}

long long lcm(long long a, long long b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int x{};
        int y{};
        int z{};
        int n{};
        std::cin >> x >> y >> z >> n;

        long long bcnn{lcm(lcm(x, y), z)};
        long long start{static_cast<long long>(std::pow(10, n - 1))};
        long long end{static_cast<long long>(std::pow(10, n))};

        long long res{(start + bcnn - 1) / bcnn * bcnn};
        if(res < end)
            std::cout << res << '\n';
        else
            std::cout << -1 << '\n';
    } 

    return 0;
}