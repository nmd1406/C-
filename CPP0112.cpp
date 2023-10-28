#include<iostream>
#include<cmath>
#include<iomanip>

struct Coordinate
{
    double x{};
    double y{};
};

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        Coordinate toaDoA{};
        Coordinate toaDoB{};
        std::cin >> toaDoA.x >> toaDoA.y >> toaDoB.x >> toaDoB.y;

        double result{ std::sqrt( (toaDoB.x - toaDoA.x) * (toaDoB.x - toaDoA.x) + (toaDoB.y - toaDoA.y) * (toaDoB.y - toaDoA.y) ) };

        std::cout << std::setprecision(4) << std::fixed << result << '\n';
    }

    return 0;
}