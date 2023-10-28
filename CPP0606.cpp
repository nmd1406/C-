#include<iostream>
#include<string>

class NhanVien
{
private:
    std::string maNV{"00001"};
    std::string hoTen{};
    std::string gioiTinh{};
    std::string ngaySinh{};
    std::string diaChi{};
    std::string maSoThue{};
    std::string ngayKiHopDong{};

public:
void nhap()
{
    std::getline(std::cin >> std::ws, hoTen);
    std::getline(std::cin, gioiTinh);
    std::getline(std::cin, ngaySinh);
    std::getline(std::cin >> std::ws, diaChi);
    std::getline(std::cin, maSoThue);
    std::getline(std::cin, ngayKiHopDong);
}

void xuat()
{
    std::cout << maNV << ' ' << hoTen << ' ' << gioiTinh << ' ' << ngaySinh << ' ' << diaChi << ' ' << maSoThue << ' ' << ngayKiHopDong;
}
};

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}