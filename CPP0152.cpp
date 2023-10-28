#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int a{};
        int m{};
        std::cin >> a >> m;

        bool flag{false};

        for(int i{1}; i < m; ++i)
        {
            if( (a * i) % m == 1 )
            {
                std::cout << i << '\n';
                flag = true;
                break;
            }
        }

        if(!flag)
            std::cout << -1 << '\n';
    }

    return 0;
}