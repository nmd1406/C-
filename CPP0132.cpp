#include<iostream>
#include<cmath>

long long maxGCDPrime(long long n)
{
    long long maxPrime{};

    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        while(n % i == 0)
            n /= i;
        
        if(maxPrime < i)
            maxPrime = i;
    }

    if(n != 1)
        return n;

    return maxPrime;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        std::cin >> n;

        std::cout << maxGCDPrime(n) << '\n';
    }
    return 0;
}