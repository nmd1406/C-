#include<iostream>
#include<cmath>

int prime[1000];

void sieve()
{
    for(int i{0}; i <= 1000; ++i)
        prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;

    for(int i{2}; i <= std::sqrt(1000); ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j <= 1000; j += i)
                prime[j] = 0;
        }
    }
}

int main()
{
    sieve();

    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        for(int i{2}; i <= std::sqrt(n); ++i)
        {
            if(prime[i])
                std::cout << (i * i) << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}