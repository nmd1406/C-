#include<iostream>
#include<string>
#include<cctype>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        long long max{};
        long long num{};
        for(char ch : str)
        {
            if(isdigit(ch))
                num = num * 10 + (ch - '0');
            else
            {
                if(max < num)
                    max = num;

                num = 0;
            }
        }

        std::cout << max << '\n';
    }

    return 0;
}