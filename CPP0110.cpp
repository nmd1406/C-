#include<iostream>
#include<string>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin >> std::ws, str);

        str.erase(str.find("084"), 3);
        std::cout << str << '\n';
    }

    return 0;
}