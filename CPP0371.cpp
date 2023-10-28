#include<iostream>
#include<string>
#include<cctype>

bool noVowel(char ch)
{
    return (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y');
}

int main()
{
    std::string str{};
    std::getline(std::cin, str);

    for(char& ch : str)
        ch = tolower(ch);

    for(char ch : str)
    {
        if(noVowel(ch))
            std::cout << '.' << ch;
    }

    return 0;
}