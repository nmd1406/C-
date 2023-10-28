#include<iostream>
#include<map>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        std::map<char, int> charMap{};
        char maxCh{};
        for(char ch : str)
        {
            int count{};
            charMap[ch]++;

            if(charMap[ch] > count)
            {
                count = charMap[ch];
                maxCh = ch;
            }
        }

        if(charMap[maxCh] - 1 > str.length() - charMap[maxCh])
            std::cout << 0 << '\n';
        else
            std::cout << 1 << '\n';
    }

    return 0;
}