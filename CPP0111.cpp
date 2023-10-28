#include<iostream>
#include<cstring>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        char str[20]{};
        std::cin >> str;

        bool flag{true};

        for(int i{0}; i < std::strlen(str) - 1; ++i)
        {
            if( ((str[i] - '0') - (str[i + 1] - '0') != 1) && ((str[i] - '0') - (str[i + 1] - '0') != -1) )
            {
                flag = false;
                break;
            }
        }

        if(flag)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}