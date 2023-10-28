#include<iostream>
#include<string>
#include<sstream>

int main()
{
    std::string str{};
    std::getline(std::cin, str);

    std::string word{};
    std::cin >> word;

    std::stringstream ss(str);
    std::string token{};

    while(ss >> token)
    {
        if(token != word)
            std::cout << token << ' ';
    }

    return 0;
}