#include<iostream>
#include<string>

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
            sum += (ch - '0');
        
        if(sum % 9 == 0 && sum)
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}