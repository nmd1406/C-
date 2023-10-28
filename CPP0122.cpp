#include<iostream>

long lcm(long a, long b)
{
    const long smallerNum{a < b ? a : b};
    const long largerNum{a > b ? a : b};

    for(long i{largerNum}; ; i += largerNum)
    {
        if(i % smallerNum == 0)
            return static_cast<long>(i);
    }
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        long bcnn{1};
        bool flag{false};

        for(int i{2}; i <= n; ++i)
            bcnn = lcm(bcnn, i);

        std::cout << bcnn << '\n';
    }
    return 0;
}