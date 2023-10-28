#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        std::cin >> n;

        long long temp{n};
        long long soDao{};

        while(temp > 0)
        {
            soDao = soDao * 10 + temp % 10;
            temp /= 10;
        }

        if(soDao == n)
            std::cout << "YES\n";
        else 
            std::cout << "NO\n";
    }

    return 0;
}