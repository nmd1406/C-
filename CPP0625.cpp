#include<iostream>
#include<string>
#include<algorithm>
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

    std::string getName()
    {
        std::string token{};
        std::stringstream ss{this->hoTen};
        std::string ten{};

        while(ss >> token)
            ten = token;
        
        return ten;
    }

    std::string getMa()
    {
        return this->ma;
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

bool cmp(GiangVien& a, GiangVien& b)
{
    std::string ten1{a.getName()};
    std::string ten2{b.getName()};
    if(ten1 == ten2)
        return a.getMa() < b.getMa();

    return ten1 < ten2;
}

int main()
{
    int n{};
    std::cin >> n;
    GiangVien gv[n];

    for(int i{}; i < n; ++i)
        std::cin >> gv[i];

    std::sort(gv, gv + n, cmp);

    for(int i{}; i < n; ++i)
        std::cout << gv[i];
    return 0;
}