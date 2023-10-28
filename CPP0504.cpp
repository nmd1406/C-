#include<iostream>
#include<string>
#include<iomanip>

struct SinhVien
{
    std::string maSV{"B20DCCN001"};
    std::string hoTen{};
    std::string lop{};
    std::string ngaySinh{};
    double gpa{};
};

void nhap(SinhVien& sv)
{
    std::getline(std::cin >> std::ws, sv.hoTen);
    std::getline(std::cin, sv.lop);
    std::getline(std::cin, sv.ngaySinh);
    std::cin >> sv.gpa;

    if(sv.ngaySinh[2] != '/')
        sv.ngaySinh = "0" + sv.ngaySinh;
    if(sv.ngaySinh[5] != '/')
        sv.ngaySinh.insert(3, "0");
}

void in(const SinhVien& sv)
{
    std::cout << sv.maSV << ' ' << sv.hoTen << ' ' << sv.lop << ' ' << sv.ngaySinh << ' ' << std::fixed << std::setprecision(2) << sv.gpa;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);

    return 0;
}