#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<cctype>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int option{};
        std::cin >> option;

        std::string name{};
        std::getline(std::cin >> std::ws, name);

        for(char& ch : name)
            ch = tolower(ch);

        std::stringstream ss{name};
        std::string token{};
        std::vector<std::string> words{};

        while(ss >> token)
            words.push_back(token);

        int size{static_cast<int>(words.size())};

        for(int i{}; i < size; ++i)
            words[i][0] = toupper(words[i][0]);

        if(option == 1)
        {
            std::cout << words[size - 1] << ' ';

            for(int i{}; i < size - 1; ++i)
                std::cout << words[i] << ' ';

            std::cout << '\n';
        }
        else
        {
            for(int i{1}; i < size; ++i)
                std::cout << words[i] << ' ';

            std::cout << words[0] << '\n';
        }
    }

    return 0;
}