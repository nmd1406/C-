#include<iostream>
#include<cctype>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;
        str += 'a';

        int sum{};
        int chuSo{};
        for(char ch : str)
        {
            if(isdigit(ch))
                chuSo = chuSo * 10 + (ch - '0');
            else
            {
                sum += chuSo;
                chuSo = 0;
            }
        }

        std::cout << sum << '\n';
    }

    return 0;
}