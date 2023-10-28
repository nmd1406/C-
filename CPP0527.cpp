#include<iostream>
#include<algorithm>

struct Time
{
    int gio{};
    int phut{};
    int giay{};
};

int main()
{
    int n{};
    std::cin >> n;

    Time t[n];
    for(int i{}; i < n; ++i)
        std::cin >> t[i].gio >> t[i].phut >> t[i].giay;
        
    std::sort(t, t + n, [](const Time& a, const Time& b)
                        {
                            if(a.gio != b.gio)
                                return a.gio < b.gio;
                            if(a.phut != b.phut)
                                return a.phut < b.phut;
                            return a.giay < b.giay;
                        });

    for(int i{}; i < n; ++i)
        std::cout << t[i].gio << ' ' << t[i].phut << ' ' << t[i].giay << '\n';

    return 0;
}