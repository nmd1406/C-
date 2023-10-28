#include<iostream>
#include<string>

using namespace std;

class NhanVien
{
private:
    int maNV{1};
    string hoTen{};
    string gioiTinh{};
    string ngaySinh{};
    string diaChi{};
    string maSoThue{};
    string ngayKiHopDong{};
public:
    friend ostream& operator<<(ostream& out, const NhanVien& nv);
    friend istream& operator>>(istream& in, NhanVien& nv);
};

istream& operator>>(istream& in, NhanVien& nv)
{
    getline(in >> ws, nv.hoTen);
    getline(in, nv.gioiTinh);
    getline(in, nv.ngaySinh);
    getline(in >> ws, nv.diaChi);
    getline(in, nv.maSoThue);
    getline(in, nv.ngayKiHopDong);

    return in;
}

ostream& operator<<(ostream& out, const NhanVien& nv)
{
    static int increment{1};
    int count{5};
    int temp{increment};
    while(temp)
    {
        temp /= 10;
        --count;
    }

    for(int j{1}; j <= count; ++j)
        out << 0;

    out << increment << ' ' << nv.hoTen << ' ' << nv.gioiTinh << ' ' << nv.ngaySinh << ' ' << nv.diaChi << ' ' << nv.maSoThue << ' ' << nv.ngayKiHopDong << '\n';

    increment++;

    return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}