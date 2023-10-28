#include<iostream>
#include<set>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        int k{};
        std::cin >> str >> k;

        int count{};
        for(int i{}; i < str.length(); ++i)
        {
            std::set<char> chSet{};
            for(int j{i}; j < str.length(); ++j)
            {
                chSet.insert(str[j]);
                if(chSet.size() == k)
                    ++count;
                if(chSet.size() > k)
                    break;

            for(char ch : chSet)
                std::cout << ch << ' ';
            }
        }

        std::cout << count << '\n';
    }

    return 0;
}