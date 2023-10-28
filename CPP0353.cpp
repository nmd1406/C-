#include<iostream>
#include<string>
#include<cctype>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        for(char& ch : str)
            ch = tolower(ch);

        for(char& ch : str)
        {
            if(ch == 'a' || ch == 'b' || ch == 'c')
                ch = '2';
            else if(ch == 'd' || ch == 'e' || ch == 'f')
                ch = '3';
            else if(ch == 'g' || ch == 'h' || ch == 'i')
                ch = '4';
            else if(ch == 'j' || ch == 'k' || ch == 'l')
                ch = '5';
            else if(ch == 'm' || ch == 'n' || ch == 'o')
                ch = '6';
            else if(ch == 'p' || ch == 'q' || ch == 'r' || ch == 's')
                ch = '7';
            else if(ch == 't' || ch == 'u' || ch == 'v')
                ch = '8';
            else
                ch = '9';
        }

        bool check{true};
        int length{static_cast<int>(str.length())};
        for(int i{}; i < length / 2; ++i)
        {
            if(str[i] != str[length - i - 1])
            {
                check = false;
                break;
            }
        }

        if(check)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}