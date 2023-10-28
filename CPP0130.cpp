#include<iostream>
#include<cmath>

void phanTichPrime(long long n)
{
    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        while(n % i == 0)
        {
            std::cout << i << ' ';
            n /= i;
        }
    }

    if(n != 1)
        std::cout << n;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        std::cin >> n;

        phanTichPrime(n);
        std::cout << '\n';
    }

    return 0;
}