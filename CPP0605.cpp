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
};

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

int main()
{
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
    return 0;
}