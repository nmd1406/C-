#include<iostream>
#include<cmath>

int prime[1000001];

void sieve()
{
    for(int i{}; i < 1000000; ++i)
        prime[i] = 1;
    
    prime[0] = prime[1] = 0;

    for(int i{2}; i <= 1000; ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j < 1000000; j += i)
                prime[j] = 0;
        }
    }
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    sieve();

    while(testCase--)
    {
        long long left{};
        long long right{};
        std::cin >> left >> right;

        int count{};
        for(long long i = std::sqrt(left); i <= std::sqrt(right); ++i)
        {
            if(prime[i] && i * i >= left)
                ++count;
        }

        std::cout << count << '\n';
    }

    return 0;
}