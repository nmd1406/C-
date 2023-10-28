#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        char ch{};
        std::cin >> ch;

        if(ch >= 65 && ch <= 90)
            std::cout << static_cast<char>(ch + 32) << '\n';
        else if (ch >= 97 && ch <= 122)
            std::cout << static_cast<char>(ch - 32) << '\n';
    }

    return 0;
}