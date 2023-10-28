#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class NhanVien
{
private:
    string maNV{};
    string hoTen{};
    string gioiTinh{};
    string ngaySinh{};
    string diaChi{};
    string maSoThue{};
    string ngayKiHopDong{};
public:
    friend ostream& operator<<(ostream& out, const NhanVien& nv);
    friend istream& operator>>(istream& in, NhanVien& nv);
    friend bool cmp(const NhanVien& a, const NhanVien& b);
};

istream& operator>>(istream& in, NhanVien& nv)
{
    getline(in >> ws, nv.hoTen);
    getline(in, nv.gioiTinh);
    getline(in, nv.ngaySinh);
    getline(in >> ws, nv.diaChi);
    getline(in, nv.maSoThue);
    getline(in, nv.ngayKiHopDong);

    static int increment{1};
    int count{5};
    int temp{increment};
    while(temp)
    {
        temp /= 10;
        --count;
    }

    for(int i{}; i < count; ++i)
        nv.maNV += "0";
    nv.maNV += to_string(increment);

    ++increment;

    return in;
}

ostream& operator<<(ostream& out, const NhanVien& nv)
{
    out << nv.maNV << ' ' << nv.hoTen << ' ' << nv.gioiTinh << ' ' << nv.ngaySinh << ' ' << nv.diaChi << ' ' << nv.maSoThue << ' ' << nv.ngayKiHopDong << '\n';


    return out;
}

bool cmp(const NhanVien& a, const NhanVien& b)
{
    int year1 = std::stoi(a.ngaySinh.substr(6, 4));
    int year2 = std::stoi(b.ngaySinh.substr(6, 4));

    if(year1 != year2)
        return year1 < year2;
    
    int month1 = std::stoi(a.ngaySinh.substr(0, 2));
    int month2 = std::stoi(b.ngaySinh.substr(0, 2));

    if(month1 != month2)
        return month1 < month2;

    int day1 = std::stoi(a.ngaySinh.substr(3, 2));
    int day2 = std::stoi(b.ngaySinh.substr(3, 2));

    return day1 < day2;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}