#include<iostream>
#include<cmath>

bool prime(int n)
{
    if(n == 0 || n == 1)
        return false;

    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n{};
    std::cin >> n;

    if(prime(n))
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}