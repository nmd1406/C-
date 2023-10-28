#include<iostream>
#include<string>
#include<set>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        int k{};
        std::cin >> k;

        std::set<char> word{};

        for(char ch : str)
            word.insert(ch);

        if(26 - word.size() <= k)
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}