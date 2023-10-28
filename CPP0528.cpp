#include<iostream>
#include<string>
#include<algorithm>

struct SinhVien
{
    int stt{};
    std::string maSV{};
    std::string ten{};
    std::string lop{};
    std::string email{};
    std::string doanhNghiep{};
};

void input(SinhVien& sv)
{
    static int count{1};
    sv.stt = (count++);

    std::cin >> sv.maSV;
    std::cin.ignore();
    std::getline(std::cin >> std::ws, sv.ten);
    std::cin >> sv.lop >> sv.email >> sv.doanhNghiep;
}

void output(const SinhVien& sv)
{
    std::cout << sv.stt << ' ' << sv.maSV << ' ' << sv.ten << ' ' << sv.lop << ' ' << sv.email << ' ' << sv.doanhNghiep << '\n'; 
}

int main()
{
    int n{};
    std::cin >> n;
    SinhVien sv[n];

    for(int i{}; i < n; ++i)
        input(sv[i]);

    std::sort(sv, sv + n, [](const SinhVien& a, const SinhVien& b)
                            {
                                return (a.ten < b.ten);
                            });

    int q{};
    std::cin >> q;
    while(q--)
    {
        std::string doanhNghiep{};
        std::cin >> doanhNghiep;

        for(int i{}; i < n; ++i)
        {
            if(sv[i].doanhNghiep == doanhNghiep)
                output(sv[i]);
        }
    }

    return 0;
}