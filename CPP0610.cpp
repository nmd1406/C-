#include<iostream>

using namespace std;

class PhanSo
{
private:
    long long m_tuSo{};
    long long m_mauSo{};

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;
    return gcd(b % a, a);
}

public:
    PhanSo(long long a, long long b)
        : m_tuSo{a}, m_mauSo{b}
    {}

    void rutgon()
    {
        long long ucln{gcd(m_tuSo, m_mauSo)};

        m_tuSo /= ucln;
        m_mauSo /= ucln;
    }

    friend istream& operator>>(istream& in, PhanSo& p);
    friend ostream& operator<<(ostream& out, const PhanSo& p);
    friend PhanSo operator+(PhanSo& p1, PhanSo& p2);
    friend long long gcd(long long a, long long b);
};

long long gcd(long long a, long long b)
{
    if(a == 0 || b == 0)
        return a + b;
    return gcd(b % a, a);
}

istream& operator>>(istream& in, PhanSo& p)
{
    in >> p.m_tuSo;
    in >> p.m_mauSo;

    return in;
}

ostream& operator<<(ostream& out, const PhanSo& p)
{
    out << p.m_tuSo << '/' << p.m_mauSo;

    return out;
}

PhanSo operator+(PhanSo& p1, PhanSo& p2)
{
    long long bcnn{p1.m_mauSo * p2.m_mauSo / gcd(p1.m_mauSo, p2.m_mauSo)};

    p1.m_tuSo = bcnn / p1.m_mauSo * p1.m_tuSo;
    p2.m_tuSo = bcnn / p2.m_mauSo * p2.m_tuSo;

    p1.m_tuSo += p2.m_tuSo;
    p1.m_mauSo = bcnn;

    p1.rutgon();

    return p1;
}

int main()
{
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
    return 0;
}