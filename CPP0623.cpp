#include<iostream>
#include<string>
#include<algorithm>

class SinhVien
{
private:
    std::string maSV{};
    std::string ten{};
    std::string lop{};
    std::string email{};
public:
    friend std::ostream& operator<<(std::ostream& out, const SinhVien& sv);
    friend std::istream& operator>>(std::istream& in, SinhVien& sv);
    friend bool cmp(const SinhVien& a, const SinhVien& b);
    friend int getYear( SinhVien& a );
};

std::ostream& operator<<(std::ostream& out, const SinhVien& sv)
{
    out << sv.maSV << ' ' << sv.ten << ' ' << sv.lop << ' ' << sv.email << '\n';

    return out;
}

std::istream& operator>>(std::istream& in, SinhVien& sv)
{
    in >> sv.maSV;
    std::getline(in >> std::ws, sv.ten);
    in >> sv.lop;
    std::getline(in >> std::ws, sv.email);

    return in;
}

bool cmp(const SinhVien& a, const SinhVien& b)
{
    return (a.maSV < b.maSV);
}

int getYear ( SinhVien& a )
{
    int ans = 0;
    ans = a.lop[1] - '0';
    return ans * 10 + a.lop[2] - '0';
} 

int main()
{
    int n{};
    std::cin >> n;
    SinhVien sv[n];
    for(int i{}; i < n; ++i)
        std::cin >> sv[i];

    // std::sort(sv, sv + n, cmp);

    int q{};
    std::cin >> q;
    while(q--)
    {
        int nam{};
        std::cin >> nam;

        std::cout << "DANH SACH SINH VIEN KHOA " << nam << ":\n";
        for(int i{}; i < n; ++i)
        {
            if(getYear(sv[i]) == nam - 2000)
                std::cout << sv[i];
        }
    }
    return 0;
}