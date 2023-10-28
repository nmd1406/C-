#include<iostream>
#include<string>
#include<iomanip>
#include<cctype>
#include<sstream>

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

string chuanHoa(string& name)
{
    string token{};
    string newName{};
    stringstream ss{name};

    while(ss >> token)
    {
        int length{static_cast<int>(token.length())};
        
        newName += toupper(token[0]);
        for(int i{1}; i < length; ++i)
            newName += tolower(token[i]);
        
        newName += ' '; 
    }

    return newName;
}

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

    sv.m_name = chuanHoa(sv.m_name);

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