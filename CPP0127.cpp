#include<iostream>
#include<cmath>

int prime[100001];

void sieve()
{
    for(int i{0}; i <= 100000; ++i)
        prime[i] = 1;

    prime[0] = 0;
    prime[1] = 0;

    for(int i{2}; i <= std::sqrt(100000); ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j <= 100000; j += i)
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

        bool flag{false};

        for(int i{2}; i < n; ++i)
        {
            if(prime[i] && prime[n - i])
            {
                std::cout << i << ' ' << n - i;
                flag = true;
                break;
            }
        }

        if(!flag)
            std::cout << -1;

        std::cout << '\n';
    }

    return 0;
}