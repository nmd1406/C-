#include<iostream>
#include<string>

using namespace std;

struct NhanVien
{
    int maNV{1};
    string hoTen{};
    string gioiTinh{};
    string ngaySinh{};
    string diaChi{};
    string maSoThue{};
    string ngayKiHopDong{};
};

void nhap(NhanVien& nv)
{
    getline(cin >> ws, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin >> ws, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKiHopDong);
}

void inds(NhanVien nv[], int n)
{
    static int increment{1};

    for(int i{0}; i < n; ++i)
    {
        int count{5};
        int temp{increment};
        while(temp)
        {
            temp /= 10;
            --count;
        }

        for(int j{1}; j <= count; ++j)
            std::cout << 0;

        cout << increment << ' ' << nv[i].hoTen << ' ' << nv[i].gioiTinh << ' ' << nv[i].ngaySinh << ' ' << nv[i].diaChi << ' ' << nv[i].maSoThue << ' ' << nv[i].ngayKiHopDong << '\n';

        increment++;
    }
}


int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}