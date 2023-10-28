#include<iostream>
#include<string>
#include<set>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::cin >> str;

        std::set<int> numSet{};

        bool check{true};
        for(int i{}; i < str.length(); ++i)
        {
            int number{str[i] - 48};
            if(i == 0 && number == 0)
            {
                check = false;
                break;
            }
            else if(number < 0 || number > 9)
            {
                check = false;
                break;
            }
        }

        if(!check)
            std::cout << "INVALID\n";
        else
        {
            for(char ch : str)
                numSet.insert(ch);

            if(numSet.size() == 10)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }

    return 0;
}