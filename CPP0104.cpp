#include<iostream>

int main()
{
    int n{};
    std::cin >> n;

    long long sum{};

    while(n)
    {
        long long tempSum{1};

        for(int i{1}; i <= n; ++i)
            tempSum = tempSum * i;

        sum += tempSum;

        --n;
    }

    std::cout << sum;
    return 0;
}