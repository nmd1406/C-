#include<iostream>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;
    std::cin.ignore();

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin, str);

        int length{static_cast<int>(str.length())};
        int count{1};
        for(int i{0}; i < length; ++i)
        {
            if(str[i] == str[i + 1])
                ++count;
            else
            {
                std::cout << str[i] << count;
                count = 1;
            }
        }

        std::cout << '\n';
    }

    return 0;
}