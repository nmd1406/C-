#include<iostream>
#include<cmath>
#include<algorithm>

bool isPrime(int x)
{
    if(x < 2)  
        return false;
    
    for(int i{2}; i <= std::sqrt(x); ++i)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}

int gcd(int a, int b)
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
        int x{};
        std::cin >> x;

        int count{};
        for(int i{1}; i <= x; ++i)
        {
            if(gcd(x, i) == 1)
                ++count;
        }

        if(isPrime(count))
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}