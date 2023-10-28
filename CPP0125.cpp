#include<iostream>
#include<cmath>

bool prime(int a)
{
    if(a < 2)
        return false;
        
    for(int i{2}; i <= std::sqrt(a); ++i)
    {
        if(a % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int a{};
    int b{};
    std::cin >> a >> b;

    if(a > b)
    {
        int temp{a};
        a = b;
        b = temp;
    }

    for(int i{a}; i <= b; ++i)
    {
        if(prime(i))
            std::cout << i << ' ';
    }
    return 0;
}