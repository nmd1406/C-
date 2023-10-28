#include<iostream>
#include<string>

bool check(const std::string& str)
{
    for(int i{0}; i < static_cast<int>(str.length()); ++i)
        {
            if(str[i] != '0' && str[i] != '6' && str[i] != '8')
                return false;
        }
    
    return true;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        if(check(str))
            std::cout << "YES\n";
        else 
            std::cout << "NO\n";
    }

    return 0;
}