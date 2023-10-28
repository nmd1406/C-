#include<iostream>

bool isFibo(long long n)
{
    if(n == 0 || n == 1)
        return true;

    long long a{0};
    long long b{1};
    long long c{};

    while(c <= n)
    {
        c = a + b;

        if(c == n)
            return true;

        a = b;
        b = c;
    }

    return false;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        long long n{};
        std::cin >> n;

        if(isFibo(n))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}