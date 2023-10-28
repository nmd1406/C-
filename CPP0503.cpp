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

void in(const PhanSo p)
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

int main()
{
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
    return 0;
}