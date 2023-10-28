#include<iostream>
#include<cmath>

int prime[10001];

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
        int k{};
        std::cin >> n >> k;

        int count{};
        bool flag{false};

        for(int i{2}; i <= n; ++i)
        {
            while(prime[i] && n % i == 0)
            {
                ++count;
                
                if(count == k)
                {
                    std::cout << i << '\n';
                    flag = true;
                    break;
                }

                n /= i;
            }
        }

        if(!flag)
            std::cout << -1 << '\n';
    }

    return 0;
}