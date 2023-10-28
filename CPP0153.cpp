#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        long long k{};
        std::cin >> n >> k;

        int sum{};

        for(int i{1}; i <= n; ++i)
            sum += (i % k);
        
        std::cout << sum << '\n';
    }

    return 0;
}