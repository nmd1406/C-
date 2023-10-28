#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

bool isNumber(std::string& str)
{
    for(char ch : str)
    {
        if(!isdigit(ch))
            return false;
    }

    return true;
}

int main()
{
    std::ifstream in;
    in.open("DATA.in");

    std::string token{};
    long long sum{};
    while(in >> token)
    {
        if(token.size() >= 1 && token.size() <= 9 && isNumber(token))
            sum += std::stoi(token);
    }

    std::cout << sum;
    return 0;
}