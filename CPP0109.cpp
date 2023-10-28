#include<iostream>
#include<cmath>
#include<typeinfo>

bool check(int x)
{
    int countOdd{};
    int countEven{};

    while(x)
    {
        int chuSo{x % 10};

        if(chuSo % 2 == 0)
            ++countEven;
        else
            ++countOdd;

        x /= 10;
    }

    if(countEven == countOdd) 
        return true;
    else 
        return false;
}

int main()
{
    int n{};
    std::cin >> n;

    const int start{static_cast<int>(std::pow(10, n - 1))};
    const int end{static_cast<int>(std::pow(10, n)) - 1};

    int count{};

    for(int i{start}; i <= end; ++i)
    {
        if(check(i))
        {
            std::cout << i << ' ';
            ++count;

            if(count == 10)
            {
                std::cout << '\n';
                count = 0;
            }
        }
    }
    return 0;
}