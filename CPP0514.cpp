#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<cctype>

using namespace std;

int lastNum{1};

struct SinhVien
{
    string name{};
    string lop{};
    string dob{};
    double gpa{};
};

void inMaSV()
{
    cout << "B20DCCN0";
    if(lastNum < 10)
    {
        cout << '0';
        cout << lastNum;
    }
    else
        cout << lastNum;
}

string chuanHoa(string& name)
{
    string newName{};
    string token{};
    stringstream ss{name};

    while(ss >> token)
    {
        int length{static_cast<int>(token.length()) - 1};
        newName += toupper(token[0]);

        for(int i{1}; i <= length; ++i)
            newName += tolower(token[i]);

        newName += ' ';
    }

    return newName;
}

void nhap(SinhVien ds[], int n)
{
    for(int i{0}; i < n; ++i)
    {
        getline(cin >> ws ,ds[i].name);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].dob);
        cin >> ds[i].gpa;
    }
}

void in(SinhVien ds[], int n)
{
    for(int i{0}; i < n; ++i)
    {
        if(ds[i].dob[2] != '/')
            ds[i].dob = "0" + ds[i].dob;
        if(ds[i].dob[5] != '/')
            ds[i].dob.insert(3, "0");

        ds[i].name = chuanHoa(ds[i].name);
        inMaSV();

        std::cout << ' ' << ds[i].name << ' ' << ds[i].lop << ' ' << ds[i].dob << setprecision(2) << fixed << ' ' << ds[i].gpa << '\n';

        ++lastNum;

    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}