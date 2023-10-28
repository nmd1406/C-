#include<iostream>
#include<vector>
#include<sstream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin >> std::ws, str);

        std::stringstream ss{str};
        std::string token{};
        std::vector<std::string> words{};
        while(ss >> token)
            words.push_back(token);
        
        for(int i{static_cast<int>(words.size() - 1)}; i >=0; --i)
            std::cout << words[i] << ' ';

        std::cout << '\n';
    }
    return 0;
}