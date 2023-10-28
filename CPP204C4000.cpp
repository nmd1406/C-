#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct SinhVien
{
    string maSV{"N20DCCN001"};
    string hoTen{};
    string lop{};
    string ngaySinh{};
    double gpa{};
};

void nhapThongTinSV(SinhVien& sv)
{
    getline(cin >> ws, sv.hoTen);
    cin >> sv.lop;
    cin >> sv.ngaySinh;
    std::cin >> sv.gpa;

    if(sv.ngaySinh[2] != '/')
        sv.ngaySinh = "0" + sv.ngaySinh;
    if(sv.ngaySinh[5] != '/')
        sv.ngaySinh.insert(3, "0");
}

void inThongTinSV(const SinhVien& sv)
{
    std::cout << sv.maSV << ' ' << sv.hoTen << ' ' << sv.lop << ' ' << sv.ngaySinh << ' ' << fixed << setprecision(2) << sv.gpa; 
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}