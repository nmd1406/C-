#include<iostream>

using namespace std;

struct PhanSo
{
    long long tu{};
    long long mau{};
};

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;

    return gcd(b % a, a);
}

void process(const PhanSo& a, const PhanSo& b)
{
    PhanSo c{};
    long long bcnn{(a.mau * b.mau) / gcd(a.mau, b.mau)};
    c.tu = ((bcnn / a.mau) * a.tu + (bcnn / b.mau) * b.tu) * ((bcnn / a.mau) * a.tu + (bcnn / b.mau) * b.tu);
    c.mau = bcnn * bcnn;

    long long ucln1{gcd(c.tu, c.mau)};
    c.tu /= ucln1;
    c.mau /= ucln1;

    cout << c.tu << '/' << c.mau << ' ';

    PhanSo d{};
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;

    long long ucln2{gcd(d.tu, d.mau)};
    d.tu /= ucln2;
    d.mau /= ucln2;

    cout << d.tu << '/' << d.mau << '\n';
}

int main()
{
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}

    return 0;
}