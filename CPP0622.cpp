#include<iostream>
#include<string>

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
    friend bool inTheoLop(const SinhVien& sv, const std::string& lop);
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
    in >> sv.lop >> sv.email;

    return in;
}

bool inTheoLop(const SinhVien& sv, const std::string& lop)
{
    return !(sv.lop.compare(lop));
}

int main()
{
    int n{};
    std::cin >> n;
    SinhVien sv[n];
    for(int i{}; i < n; ++i)
        std::cin >> sv[i];

    int q{};
    std::cin >> q;
    while(q--)
    {
        std::string lop{};
        std::cin >> lop;

        std::cout << "DANH SACH SINH VIEN LOP " << lop << ":\n";
        for(int i{}; i < n; ++i)
        {
            if(inTheoLop(sv[i], lop))
                std::cout << sv[i];
        }

        std::cout << '\n';
    }
    return 0;
}