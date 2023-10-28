#include<iostream>
#include<string>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;
    std::cin.ignore();

    while(testCase--)
    {
        std::string num1{};
        std::string num2{};
        std::cin >> num1 >> num2;

        while(num1.length() < num2.length())
            num1 = "0" + num1;
        while(num1.length() > num2.length())
            num2 = "0" + num2;

        if(num1 < num2)
            std::swap(num1, num2);
        
        int length1{static_cast<int>(num1.length())};

        std::string res{};
        int bienNho{};

        for(int i{length1 - 1}; i >= 0; --i)
        {
            int temp{static_cast<int>(num1[i] - '0') - static_cast<int>(num2[i] - '0') - bienNho};
            if(temp < 0)
            {
                res = static_cast<char>(temp + 10 + '0') + res;
                bienNho = 1;
            }
            else
            {
                res = static_cast<char>(temp + '0') + res;
                bienNho = 0;
            }   
        }
        
        std::cout << res << '\n';
    }

    return 0;
}