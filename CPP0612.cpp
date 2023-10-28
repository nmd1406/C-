#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>
#include<cctype>

using namespace std;

int count{1};

class SinhVien 
{
private:
    string m_maSV{"B20DCCN"};
    string m_ten{};
    string m_lop{};
    string m_ngaySinh{};
    double m_diem{};
public:
    friend ostream& operator<< (ostream& out, const SinhVien& sv);
    friend istream& operator>> (istream& in, SinhVien& sv);
};

string chuanHoa(string& name)
{
    stringstream ss{name};
    string newName{};
    string token{};
    while(ss >> token)
    {
        token[0] = toupper(token[0]);

        for(int i{1}; i < token.length(); ++i)
            token[i] = tolower(token[i]);
        
        if(newName == "")
            newName += token;
        else
            newName = newName + ' ' + token;
    }

    return newName;
}

ostream& operator<< (ostream& out, const SinhVien& sv)
{
    out << sv.m_maSV << ' ' << sv.m_ten << ' ' << sv.m_lop << ' ' << sv.m_ngaySinh << ' ' << setprecision(2) << fixed << sv.m_diem << '\n';

    return out;
}

istream& operator>> (istream& in, SinhVien& sv)
{
    getline(in >> ws, sv.m_ten);
    getline(in, sv.m_lop);
    getline(in, sv.m_ngaySinh);
    cin >> sv.m_diem;

    sv.m_ten = chuanHoa(sv.m_ten);

    sv.m_maSV += to_string(count);
    ++count;
    while(sv.m_maSV.length() < 10)
        sv.m_maSV.insert(7, "0");

    if(sv.m_ngaySinh[2] != '/')
        sv.m_ngaySinh = "0" + sv.m_ngaySinh;
    if(sv.m_ngaySinh[5] != '/')
        sv.m_ngaySinh.insert(3, "0");

    return in;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}