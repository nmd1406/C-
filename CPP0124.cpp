#include<iostream>
#include<cmath>

void thuaSoNguyenTo(long n)
{
    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        int count{};
        
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                ++count;
                n /= i;
            }
            std::cout << i << ' ' << count << '\n';
        }
    }

    if(n != 1)
        std::cout << n << ' ' << 1;
}

int main()
{
    long n{};
    std::cin >> n;

    thuaSoNguyenTo(n);
    return 0;  
}