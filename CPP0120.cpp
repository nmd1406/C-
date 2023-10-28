#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int m{};
        int n{};
        int a{};
        int b{};
        std::cin >> m >> n >> a >> b;

        if(m > n)
            std::swap(m, n);

        int count{};
        for(int i{m}; i <= n; ++i)
        {
            if(i % a == 0)
                ++count;

            if(i % b == 0)
                ++count;

            if(i % a == 0 && i % b == 0)
                --count;
        }

        std::cout << count << '\n';
    }

    return 0;
}