#include<iostream>
#include<string>

int main()
{
    int testCase{};
    std::cin >> testCase;
    std::cin.ignore();

    while(testCase--)
    {
        std::string num{};
        std::cin >> num;

        int sumOdd{};
        int sumEven{};

        int length{static_cast<int>(num.length())};

        for(int i{0}; i < length; ++i)
        {
            if(i % 2 == 0)
                sumEven += (num[i] - '0');
            else
                sumOdd += (num[i] - '0');
        }

        int temp{sumOdd - sumEven};

        if(temp % 11 == 0)
            std::cout << 1 << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}