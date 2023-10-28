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
        std::cin >> str;

        int sum{};
        for(char ch : str)
        {
            if(ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
                sum += (ch - '0');
        }

        std::sort(str.begin(), str.end());
        for(char ch : str)
        {
            if(ch != '0' && ch != '1' && ch != '2' && ch != '3' && ch != '4' && ch != '5' && ch != '6' && ch != '7' && ch != '8' && ch != '9')
                std::cout << ch;
        }

        std::cout << sum << '\n'; 
    }

    return 0;
}