#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>

struct MatHang
{
    int ma{};
    std::string ten{};
    std::string nhom{};
    double giaMua{};
    double giaBan{};
    double loiNhuan{};
};

void input(MatHang& ds)
{
    std::getline(std::cin >> std::ws, ds.ten);
    std::getline(std::cin >> std::ws, ds.nhom);
    std::cin >> ds.giaMua >> ds.giaBan;
    ds.loiNhuan = ds.giaBan - ds.giaMua;
}

void output(const MatHang& ds)
{
    std::cout << ds.ma << ' ' << ds.ten << ' ' << ds.nhom << ' ' << std::setprecision(2) << std::fixed << ds.giaBan - ds.giaMua << '\n';
}

int main()
{
    int testCase{};
    std::cin >> testCase;
    MatHang ds[20]{};

    for(int i{0}; i < testCase; ++i)
    {
        ds[i].ma = i + 1;
        input(ds[i]);
    }

    std::sort(ds, ds + testCase, [](const MatHang& a, const MatHang& b)
                                    {
                                        return (a.loiNhuan > b.loiNhuan);
                                    });

    for(int i{0}; i < testCase; ++i)
        output(ds[i]);
    return 0;
}