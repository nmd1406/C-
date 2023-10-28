#include<iostream>
#include<string>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string num1{};
        std::string num2{};
        std::cin >> num1 >> num2;

        int length1{static_cast<int>(num1.length())};
        int length2{static_cast<int>(num2.length())};

        std::reverse(num1.begin(), num1.end());
        std::reverse(num2.begin(), num2.end());

        if(length1 < length2)
        {
            for(int i{}; i < length2 - length1; ++i)
                num1 += "0";
        }
        else
        {
            for(int i{}; i < length1 - length2; ++i)
                num2 += "0";
        }

        std::string res{};
        int bienNho{};
        int maxLength{std::max(length1, length2)};

        for(int i{}; i < maxLength; ++i)
        {
            int temp{(num1[i] - '0') + (num2[i] - '0') + bienNho};
            bienNho = temp / 10;
            temp %= 10;

            res += (temp + '0');
        }
        if(bienNho)
            res += (bienNho + '0');
        
        std::reverse(res.begin(), res.end());
        std::cout << res << '\n';
    }

    return 0;
}