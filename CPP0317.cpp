#include<iostream>
#include<string>

bool soThuanNghich(const std::string& num, int length)
{
    for(int i{0}; i < length / 2; ++i)
    {
        if(num[i] != num[length - i - 1])
            return false;
    }

    return true;
}

bool soToanChan(const std::string& num, int length)
{
    for(int i{0}; i < length; ++i)
    {
        if((num[i] - '0') % 2 != 0)
            return false;
    }

    return true;
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

        int length{static_cast<int>(num.length())};

        if(soThuanNghich(num, length) && soToanChan(num, length))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}