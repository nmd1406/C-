#include<iostream>
#include<cmath>

bool increase(long long x)
{
    int a{static_cast<int>(x % 10)};
    x /= 10;
    int b{static_cast<int>(x % 10)};

    while(x)
    {
        if(a <= b)
            return false;

        x /= 10;
        a = b;
        b = x % 10;
    }

    return true;
}

bool decrease(long long x)
{
    int a{static_cast<int>(x % 10)};
    x /= 10;
    int b{static_cast<int>(x % 10)};

    while(x)
    {
        if(a >= b)
            return false;

        x /= 10;
        a = b;
        b = x % 10;
    }

    return true;
}

bool isPrime(long long x)
{
    for(int i{2}; i <= std::sqrt(x); ++i)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        long long start{1};
        long long end{1};

        for(int i{1}; i <= n; ++i)
        {
            start *= 10;
            end *= 10;
        }
        start /= 10;
        --end;

        int count{};

        for(long long i{start}; i <= end; ++i)
        {
            if(decrease(i) || increase(i))
            {
                if(isPrime(i))
                    ++count;
            }
        }

        std::cout << count << '\n';
    }

    return 0;
}