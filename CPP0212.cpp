#include<iostream>

const long long modulo = 1000000007;

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        long long x{};
        std::cin >> n >> x;

        long long* arr{new long long[n]{}};
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        long long sum{};
        for(int i{}; i < n; ++i)
        {
            long long prod{1};
            for(int j{n - i - 1}; j > 0; --j)
                prod = (prod * x) % modulo;
            
            sum += arr[i] * prod;
            if(sum > modulo)
                sum %= modulo;
        }

        std::cout << sum << '\n';
    }

    return 0;
}