#include<iostream>
#include<string>
#include<sstream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin >> std::ws, str);

        std::stringstream token(str);

        int count{};

        while(token >> str)
            ++count;

        std::cout << count << '\n';
    }

    return 0;
}