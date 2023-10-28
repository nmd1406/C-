#include<iostream>
#include<string>
#include<iomanip>

class SinhVien
{
    std::string m_maSV{"B20DCCN001"};
    std::string m_name{};
    std::string m_class{};
    std::string m_dob{};
    double m_gpa{};

public:
    void nhap()
    {
        std::getline(std::cin >> std::ws, m_name);
        std::getline(std::cin >> std::ws, m_class);
        std::getline(std::cin >> std::ws, m_dob);
        std::cin >> m_gpa;
    }

    void xuat()
    {
        if(m_dob[2] != '/')
            m_dob = "0" + m_dob;
        if(m_dob[5] != '/')
            m_dob.insert(3, "0");

        std::cout << m_maSV << ' ' << m_name << ' ' << m_class << ' ' << m_dob << ' ' << std::setprecision(2) << std::fixed << m_gpa;
    }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}