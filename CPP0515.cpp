#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<cctype>
#include<algorithm>

using namespace std;

struct SinhVien
{
    string ma{"B20DCCN"};
    string name{};
    string lop{};
    string dob{};
    double gpa{};
};

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

        string temp{to_string(i + 1)};
        while(temp.size() < 3)
            temp = "0" + temp;

        ds[i].ma += temp;
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

        std::cout << ds[i].ma << ' ' << ds[i].name << ds[i].lop << ' ' << ds[i].dob << setprecision(2) << fixed << ' ' << ds[i].gpa << '\n';
    }
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, [](const SinhVien& a, const SinhVien& b)
                        {
                            return (a.gpa > b.gpa);
                        });
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}