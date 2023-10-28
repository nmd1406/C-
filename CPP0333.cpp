#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<vector>

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
    for(int i{0}; i < size - 1; ++i)
    {
        word[i][0] = toupper(word[i][0]);
        
        if(i < size - 2)
            std::cout << word[i] << ' ';
        else
            std::cout << word[i] << ", ";
    }

    for(char& ch : word[size - 1])
        ch = toupper(ch);

    std::cout << word[size - 1];
    return 0;
}