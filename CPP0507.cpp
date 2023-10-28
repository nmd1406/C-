#include<iostream>

using namespace std;

struct PhanSo
{
    long long tuSo{};
    long long mauSo{};
};

void nhap(PhanSo& p)
{
    std::cin >> p.tuSo >> p.mauSo;
}

void in(const PhanSo& p)
{
    std::cout << p.tuSo << '/' << p.mauSo;
}

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;

    return gcd(b % a, a);
}

void rutgon(PhanSo& p)
{
    long long ucln{gcd(p.tuSo, p.mauSo)};

    p.tuSo /= ucln;
    p.mauSo /= ucln;
}

PhanSo tong(PhanSo& p1, PhanSo& p2)
{
    long long bcnn{p1.mauSo * p2.mauSo / gcd(p1.mauSo, p2.mauSo)};

    p1.tuSo = bcnn / p1.mauSo * p1.tuSo;
    p2.tuSo = bcnn / p2.mauSo * p2.tuSo;

    p1.tuSo += p2.tuSo;
    p1.mauSo = bcnn;

    rutgon(p1);

    return p1;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}