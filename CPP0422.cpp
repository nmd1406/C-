#include<iostream>
#include<vector>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::vector<long long> numArr{};

        for(int i{0}; i < n; ++i)
        {
            long long temp{};
            std::cin >> temp;
            numArr.push_back(temp);
        }

        for(long long num : numArr)
        {
            if(num)
                std::cout << num << ' ';
        }

        for(long long num : numArr)
        {
            if(!num)
                std::cout << num << ' ';
        }

        std::cout << '\n';
    }
    return 0;
}