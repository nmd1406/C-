#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>

using namespace std;

int ma{1};

struct NhanVien
{
    string maNV{};
    string ten{};
    string gioiTinh{};
    string ngaySinh{};
    string diaChi{};
    string maSoThue{};
    string ngayKiHopDong{};
    string day{};
    string month{};
    string year{};
};

void chuanHoaNgayThang(string& str)
{
    if(str[2] != '/')
        str = "0" + str;
    if(str[5] != '/')
        str.insert(3, "0");
}

void nhap(NhanVien& nv)
{
    getline(cin >> ws, nv.ten);
    cin >> nv.gioiTinh >> nv.ngaySinh;
    cin.ignore();
    getline(cin >> ws, nv.diaChi);
    cin >> nv.maSoThue;
    cin >> nv.ngayKiHopDong;

    stringstream ss(nv.ngaySinh);
    getline(ss, nv.month, '/');
    getline(ss, nv.day, '/');
    getline(ss, nv.year, '/');

    string temp{to_string(ma)};
    while(temp.size() < 5)
        temp = "0" + temp;
    nv.maNV = temp;
    ++ma;

    // chuanHoaNgayThang(nv.ngayKiHopDong);
    // chuanHoaNgayThang(nv.ngaySinh);
}

void inds(NhanVien ds[], int n)
{
    for(int i{0}; i < n; ++i)
    {
        cout << ds[i].maNV << ' ' << ds[i].ten << ' ' << ds[i].gioiTinh << ' ' << ds[i].ngaySinh << ' ' << ds[i].diaChi << ' ' << ds[i].maSoThue << ' ' << ds[i].ngayKiHopDong << '\n';
    }
}

bool cmp(const NhanVien& a, const NhanVien& b)
{
    if(a.year > b.year) return 0;
    if(a.year < b.year) return 1;
    if(a.month > b.month) return 0;
    if(a.month < b.month) return 1;
    if(a.day > b.day) return 0;
    return 1;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);

    return 0;
}