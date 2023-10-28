#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long x{};
        long long y{};
        long long p{};
        std::cin >> x >> y >> p;

        long long res{1};
        for(int i{1}; i <= y; ++i)
            res = (res * x) % p;

        std::cout << res << '\n';
    }

    return 0;
}