#include<iostream>
#include<string>

struct NhanVien
{
    std::string maNV{"00001"};
    std::string hoTen{};
    std::string gioiTinh{};
    std::string ngaySinh{};
    std::string diaChi{};
    std::string maSoThue{};
    std::string ngayKiHopDong{};
};

void nhap(NhanVien& nv)
{
    std::getline(std::cin >> std::ws, nv.hoTen);
    std::getline(std::cin, nv.gioiTinh);
    std::getline(std::cin, nv.ngaySinh);
    std::getline(std::cin >> std::ws, nv.diaChi);
    std::getline(std::cin, nv.maSoThue);
    std::getline(std::cin, nv.ngayKiHopDong);
}

void in(const NhanVien& nv)
{
    std::cout << nv.maNV << ' ' << nv.hoTen << ' ' << nv.gioiTinh << ' ' << nv.ngaySinh << ' ' << nv.diaChi << ' ' << nv.maSoThue << ' ' << nv.ngayKiHopDong;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}