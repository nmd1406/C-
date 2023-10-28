#include<iostream>
#include<cmath>

bool isPrime(int n)
{
    if(n < 2)
        return false;
    
    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int tongChuSo(int n)
{
    int sum{};
    while(n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int thuaSoNguyenTo(int n)
{
    int sum{};
    int i{2};

    while(i <= n)
    {
        if(n % i == 0)
        {
            sum += tongChuSo(i);
            n /= i;
        }
        else
            ++i;
    }

    return sum;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        if(!isPrime(n))
        {
            int sumDigit{tongChuSo(n)};

            if(thuaSoNguyenTo(n) == sumDigit)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
        else
            std::cout << "NO\n";
    }

    return 0;
}