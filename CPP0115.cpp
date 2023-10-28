#include<iostream>
#include<cmath>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        for(int i{2}; i <= std::sqrt(n); ++i)
        {
            int count{};
            while(n % i == 0)
            {
                ++count;
                n /= i;
            }
            
            if(count)
                std::cout << i << ' ' << count << ' ';
        }

        if(n != 1)
            std::cout << n << ' ' << 1;
            
        std::cout << '\n';
    }

    return 0;
}