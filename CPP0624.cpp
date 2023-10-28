#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

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
    friend char getNganhHoc(const SinhVien& a);
    friend char getClass(const SinhVien& a);
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

char getNganhHoc(const SinhVien& a)
{
    return a.maSV[5];
}

char getClass(const SinhVien& a)
{
    return a.lop[0];
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
        std::string nganhHoc{};
        std::getline(std::cin >> std::ws, nganhHoc);

        for(char& ch : nganhHoc)
            ch = toupper(ch);

        std::cout << "DANH SACH SINH VIEN NGANH " << nganhHoc << ":\n";
        for(int i{}; i < n; ++i)
        {
            if(getClass(sv[i]) == 'E' && (getNganhHoc(sv[i]) == 'C' || getNganhHoc(sv[i]) == 'A'))
                continue;

            if(getNganhHoc(sv[i]) == nganhHoc[0])
                std::cout << sv[i];
        }
    }
    return 0;
}