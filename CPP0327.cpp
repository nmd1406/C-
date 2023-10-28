#include<iostream>
#include<string>

bool divisibleByFive(const std::string& num)
{
    int expTwo{1};
    int sum{};

    int length{static_cast<int>(num.length())};

    for(int i{length - 1}; i >= 0; --i)
    {
        sum += (num[i] - '0') * expTwo;
        sum %= 10;
        expTwo *= 2;
        expTwo %= 10;
    }

    if(sum % 5 == 0)
        return true;
    else
        return false;
}

int main()
{
    int testCase{};
    std::cin >> testCase;
    std::cin.ignore();

    while(testCase--)
    {
        std::string num{};
        std::getline(std::cin, num);

        if(divisibleByFive(num))
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }

    return 0;
}