#include<iostream>
#include<string>
#include<map>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        std::map<char, int> strMap{};

        for(char ch : str)
            strMap[ch]++;

        for(char ch : str)
        {
            if(strMap[ch] == 1)
                std::cout << ch;
        }

        std::cout << '\n';
    }
    return 0;
}