#include<iostream>
#include<string>

long long min(std::string& str1, std::string& str2)
{
    for(char& num : str1)
    {
        if(num == '6')
            num = '5';
    }
    for(char& num : str2)
    {
        if(num == '6')
            num = '5';
    }

    return std::stoll(str1) + std::stoll(str2);
}

long long max(std::string& str1, std::string& str2)
{
    for(char& num : str1)
    {
        if(num == '5')
            num = '6';
    }
    for(char& num : str2)
    {
        if(num == '5')
            num = '6';
    }

    return std::stoll(str1) + std::stoll(str2);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str1{};
        std::string str2{};
        std::cin >> str1 >> str2;

        std::cout << min(str1, str2) << ' ' << max(str1, str2) << '\n';
    }

    return 0;
}