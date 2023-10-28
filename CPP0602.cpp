#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class SinhVien
{
private:
    string m_maSV{"B20DCCN001"};
    string m_name{};
    string m_class{};
    string m_dob{};
    double m_gpa{};

public:

    friend ostream& operator<< (ostream& out, const SinhVien& sv);
    friend istream& operator>> (istream& in, SinhVien& sv);
};

ostream& operator<< (ostream& out, const SinhVien& sv)
{
    out << sv.m_maSV << ' ' << sv.m_name << ' ' << sv.m_class << ' ' << sv.m_dob << ' ' << setprecision(2) << fixed << sv.m_gpa;

    return out;
}

istream& operator>> (istream& in, SinhVien& sv)
{
    getline(in >> ws ,sv.m_name);
    getline(in >> ws ,sv.m_class);
    getline(in >> ws ,sv.m_dob);
    in >> sv.m_gpa;

    if(sv.m_dob[2] != '/')
        sv.m_dob = "0" + sv.m_dob;
    if(sv.m_dob[5] != '/')
        sv.m_dob.insert(3, "0");

    return in;
}

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}