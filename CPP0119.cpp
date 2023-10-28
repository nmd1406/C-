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

        int count{};
        for(int i{1}; i <= std::sqrt(n); ++i)
        {
            if(n % i == 0)
            {
                if(i % 2 == 0)
                    ++count;

                if((n / i) % 2 == 0)
                    ++count;

                if(i * i == n && i % 2 == 0)
                    --count;
            }
        }

        std::cout << count << '\n';
    }

    return 0;
}