#include<iostream>
#include<cmath>

int prime[100001]{};

void sieve()
{
    for(int i{0}; i < 100000; ++i)
        prime[i] = 1;

    prime[0] = prime[1] = 0;

    for(int i{2}; i <= std::sqrt(100000); ++i)
    {
        if(prime[i])
        {
            for(int j{i * i}; j < 100000; j += i)
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
        int l{};
        int r{};
        std::cin >> l >> r;

        int count{};
        for(int i{l}; i <= r; ++i)
        {
            if(prime[i])
                ++count;
        }

        std::cout << count << '\n';
    }

    return 0;
}