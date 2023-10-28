#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cctype>

int main()
{
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    int length{static_cast<int>(name.length())};
    for(int i{0}; i < length; ++i)
        name[i] = tolower(name[i]);

    std::stringstream ss(name);
    std::string token{};

    std::vector<std::string> word{};

    while(ss >> token)
        word.push_back(token);

    int size{static_cast<int>(word.size())};
    
    std::cout << word[size - 1];

    for(int i{0}; i < size - 1; ++i)
        std::cout << word[i].substr(0, 1);

    std::cout << "@ptit.edu.vn";
    return 0;
}