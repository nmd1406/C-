#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<cctype>

int main()
{
    std::ifstream in;
    in.open("VANBAN.in");

    std::string token{};
    std::set<std::string> words{};
    while(in >> token)
    {
        for(char& ch : token)
            ch = tolower(ch);

        words.insert(token);
    }

    for(auto element : words)
        std::cout << element << '\n';

    in.close();
    return 0;
}