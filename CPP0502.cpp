#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct ThiSinh
{
    string name{};
    string dob{};
    double grade1{};
    double grade2{};
    double grade3{};
};

void nhap(ThiSinh& a)
{
    getline(cin >> ws, a.name);
    getline(cin, a.dob);
    cin >> a.grade1 >> a.grade2 >> a.grade3;
}

void in(ThiSinh& a)
{
    cout << a.name << ' ' << a.dob << ' ' << fixed << setprecision(1) << a.grade1 + a.grade2 + a.grade3;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}