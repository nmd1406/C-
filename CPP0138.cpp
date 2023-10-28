#include<iostream>
#include<cmath>

int prime[10001]{};

void sieve()
{
    for(int i{0}; i <= 10000; ++i)
        prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;

    for(int i{2}; i <= std::sqrt(10000); ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j <= 10000; j += i)
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

        for(int i{2}; i < n; ++i)
        {
            if(prime[i] && prime[n - i])
            {
                std::cout << i << ' ' << n - i << '\n';
                break;
            }
        }
    }

    return 0;
}