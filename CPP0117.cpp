#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int temp{n};
        do
        {
            int sum{};
            while(n)
            {
                sum += n % 10;
                n /= 10;
            }

            n = sum;
        } while (n >= 10);
        
        std::cout << n << '\n';
    }

    return 0;
}