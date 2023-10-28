#include<iostream>
#include<cmath>

int prime[10001];

void sieve()
{
    for(int i{0}; i <= 10000; ++i)
        prime[i] = 1;

    prime[0] = prime[1] = 0;

    for(int i{2}; i <= std::sqrt(10000); ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j <= 10000; j += i)
                prime[j] = 0;
        }
    }
}

void uocPrime(int x)
{
    for(int j{2}; j <= std::sqrt(x); ++j)
    {
        if(x % j == 0)
        {
            std::cout << j << ' ';
            break;
        }
    }
}

int main()
{
    int testCase{};
    std::cin >> testCase;;

    sieve();

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        for(int i{1}; i <= n; ++i)
        {
            if(i == 1)
            {
                std::cout << 1 << ' ';
                continue;
            }
            if(i == 2)
            {
                std::cout << 2 << ' ';
                continue;
            }
            if(i % 2 == 0)
            {
                std::cout << 2 << ' ';
                continue;
            }
            if(prime[i])
            {
                std::cout << i << ' ';
                continue;
            }
            uocPrime(i);
        }

        std::cout << '\n';
    }

    return 0;
}