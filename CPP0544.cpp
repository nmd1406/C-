#include<iostream>
#include<cmath>
#include<iomanip>

constexpr double pi{3.141592653589793238};

struct Diem
{
    double x{};
    double y{};
};

double khoangCach(const Diem& a, const Diem& b)
{
    return std::sqrt(std::pow(b.x - a.x, 2) + std::pow(b.y - a.y, 2));
}

int main()
{
    int n{};
    std::cin >> n;

    for(int i{}; i < n; ++i)
    {
        Diem a{};
        Diem b{};
        Diem c{};

        std::cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;

        double AB{khoangCach(a, b)};
        double BC{khoangCach(b, c)};
        double AC{khoangCach(a, c)};

        if(AB + BC <= AC || AB + AC <= BC || BC + AC <= AB)
            std::cout << "INVALID" << '\n';
        else
        {
            double dienTich{std::sqrt((AB + BC + AC) * (AB + BC - AC) * (BC + AC - AB) * (AC + AB - BC)) / 4};
            double banKinh{AB * BC * AC / (dienTich * 4)};

            std::cout << std::fixed << std::setprecision(3) << banKinh * banKinh * pi << '\n';
        }
    }
    return 0;
}