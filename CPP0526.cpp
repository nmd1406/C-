#include<iostream>
#include<string>
#include<algorithm>

struct Person
{
    std::string name{};
    std::string dob{};
};

bool cmp(const Person& a, const Person& b)
{
    int year1 = std::stoi(a.dob.substr(6));
    int year2 = std::stoi(b.dob.substr(6));

    if(year1 != year2)
        return year1 < year2;
    
    int month1 = std::stoi(a.dob.substr(3, 2));
    int month2 = std::stoi(b.dob.substr(3, 2));

    if(month1 != month2)
        return month1 < month2;

    int day1 = std::stoi(a.dob.substr(0, 2));
    int day2 = std::stoi(b.dob.substr(0, 2));

    return day1 < day2;

}

int main()
{
    int n{};
    std::cin >> n;

    Person per[n];
    for(int i{}; i < n; ++i)
    {
        std::cin >> per[i].name;
        std::cin.ignore();
        std::cin >> per[i].dob;
    }

    std::sort(per, per + n, cmp);
    std::cout << per[n - 1].name << '\n' << per[0].name;
    return 0;
}