#include<iostream>
#include<iomanip>

int main()
{
    int n{};
    std::cin >> n;

    double sum{};

    for(double i{1}; i <= n; ++i)
        sum += (1 / i);

    std::cout << std::setprecision(4) << std::fixed << sum;
    return 0;
}