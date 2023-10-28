#include<iostream>
#include<string>

long long remain(std::string& str, long long mod)
{
    long long res{};
    for(int i{}; i < str.size(); ++i)
    {
        res = res * 10 + str[i] - '0';
        res %= mod;
    }

    return res;
}

long long exponential(long long a, long long b, long long mod)
{
    long long res{1};
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= mod;
        }

        a *= a;
        a %= mod;
        b /= 2;
    }

    return res;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while (testCase--)
    {
        std::string num{};
        std::cin >> num;

        long long b{};
        long long mod{};
        std::cin >> b >> mod;

        long long phanDu{remain(num, mod)};
        long long res{exponential(phanDu, b, mod)};
        std::cout << res << '\n';
    }
    

    return 0;
}