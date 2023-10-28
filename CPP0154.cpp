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
        
        if(sum == k)
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}