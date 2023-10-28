#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

struct SinhVien
{
    string maSV{};
    string ten{};
    string lop{};
    double diem1{};
    double diem2{};
    double diem3{};
};

void nhap(SinhVien& sv)
{
    cin >> sv.maSV;
    cin.ignore();
    getline(cin >> ws, sv.ten);
    cin >> sv.lop >> sv.diem1 >> sv.diem2 >> sv.diem3;
    cin.ignore();
}

void in_ds(SinhVien ds[], int n)
{
    for(int i{0}; i < n; ++i)
    {
        cout << i + 1 << ' ' << ds[i].maSV << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << fixed << setprecision(1) << ds[i].diem1 << ' ' << ds[i].diem2 << ' ' << ds[i].diem3 << '\n';
    }
}

bool cmp(SinhVien a, SinhVien b)
{
    return (a.ten < b.ten);
}

void sap_xep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}