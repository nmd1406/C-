#include<iostream>
#include<string>
#include<sstream>
#include<set>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str1{};
        std::string str2{};
        std::getline(std::cin >> std::ws, str1);
        std::getline(std::cin >> std::ws, str2);

        std::set<std::string> words1{};
        std::set<std::string> words2{};
        std::stringstream ss1{str1};
        std::stringstream ss2{str2};
        std::string token{};

        while(ss1 >> token)
            words1.insert(token);
        while(ss2 >> token)
            words2.insert(token);

        for(auto i : words1)
        {
            if(words2.find(i) == words2.end())
                std::cout << i << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}