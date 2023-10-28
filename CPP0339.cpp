#include<iostream>
#include<string>
#include<map>

int main()
{   
    int testCase{};
    std::cin >> testCase;
    std::cin.ignore();

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin, str);

        std::map<char, int> charMap{};

        for(char ch : str)
            charMap[ch]++;

        int numSubStr{static_cast<int>(str.length())};
        for(auto element : charMap)
            numSubStr += element.second * (element.second - 1) / 2;

        std::cout << numSubStr << '\n';
    }
    return 0;
}