#include<iostream>
#include<cmath>

bool isPrime(long long n)
{
    if(n < 2)
        return false;
    
    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        if(n % i == 0)
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

        bool check{false};
        for(int i{2}; i < 20; ++i)
        {
            if(isPrime(i) && isPrime(std::pow(2, i) - 1))
            {
                if(std::pow(2, i - 1) * (std::pow(2, i) - 1) == n)
                {
                    check = true;
                    break;
                }

            }
        }

        if(check)
            std::cout << 1 << '\n';
        else 
            std::cout << 0 << '\n';
    }

    return 0;
}