#include<iostream>
#include<fstream>
#include<string>

int main()
{
    std::ifstream in{"PTIT.in"};
    std::ofstream out{"PTIT.out"};
    std::string str{};

    std::getline(in >> std::ws, str);
    out << str;

    in.close();
    out.close();

    return 0;
}