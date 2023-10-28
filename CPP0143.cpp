#include<iostream>

long long fibonacci(int n)
{
    if(n == 1 || n == 2)
        return 1;

    long long a{1};
    long long b{1};
    long long c{};

    for(int i{3}; i <= n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::cout << fibonacci(n) << '\n';
    }

    return 0;
}