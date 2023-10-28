#include<iostream>
#include<string>
#include<sstream>
#include<cctype>

class GiangVien
{
private:
    std::string ma{"GV"};
    std::string hoTen{};
    std::string boMon{};
public:
    friend std::ostream& operator<<(std::ostream& out, const GiangVien& gv);
    friend std::istream& operator>>(std::istream& in, GiangVien& gv);

    void chuanHoa()
    {
        std::string token{};
        std::stringstream ss{this->boMon};
        std::string finalStr{};

        while(ss >> token)
        {
            token[0] = toupper(token[0]);
            finalStr += token[0];
        }

        this->boMon = finalStr;
    }

    std::string getBoMon()
    {
        return this->boMon;
    }
};

std::ostream& operator<<(std::ostream& out, const GiangVien& gv)
{
    out << gv.ma << ' ' << gv.hoTen << ' ' << gv.boMon << "\n";

    return out;
}

std::istream& operator>>(std::istream& in, GiangVien& gv)
{
    static int count{1};
    if(count < 10)
        gv.ma = gv.ma + "0" + std::to_string(count++);
    else
        gv.ma += std::to_string(count++);

    std::getline(in >> std::ws, gv.hoTen);
    std::getline(in >> std::ws, gv.boMon);
    gv.chuanHoa();

    return in;
}

std::string chuanHoa(std::string& boMon)
{
    std::string token{};
    std::stringstream ss{boMon};

    std::string finalStr{};
    while(ss >> token)
    {
        token[0] = toupper(token[0]);
        finalStr += token[0];
    }

    return finalStr;
}

int main()
{
    int n{};
    std::cin >> n;
    GiangVien gv[n];

    for(int i{}; i < n; ++i)
        std::cin >> gv[i];

    int q{};
    std::cin >> q;

    while(q--)
    {
        std::string boMon{};
        std::getline(std::cin >> std::ws, boMon);

        boMon = chuanHoa(boMon);

        std::cout << "DANH SACH GIANG VIEN BO MON " << boMon << ":\n";
        for(int i{}; i < n; ++i)
        {
            if(gv[i].getBoMon() == boMon)
                std::cout << gv[i];
        }
    }

    return 0;
}