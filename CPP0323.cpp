#include<iostream>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string num{};
        long long m{};
        std::cin >> num >> m;

        long long k{};
        for(char ch : num)
            k = (k * 10 + (ch - '0')) % m;
        
        std::cout << k << '\n';
    }

    return 0;
}