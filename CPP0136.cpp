#include<iostream>
#include<cmath>

bool isPrime(long long x)
{
    for(int i{2}; i <= std::sqrt(x); ++i)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        std::cin >> n;

        int count{};

        for(int i{2}; i <= std::sqrt(n); ++i)
        {
            if(isPrime(i))
                ++count;
        }

        std::cout << count << '\n';
    }

    return 0;
}