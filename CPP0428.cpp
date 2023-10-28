#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int m{};
        std::cin >> n >> m;

        std::vector<long long> numArr{};

        for(int i{0}; i < n + m; ++i)
        {
            long long temp{};
            std::cin >> temp;
            numArr.push_back(temp);
        }

        std::sort(numArr.begin(), numArr.end());

        for(long long num : numArr)
            std::cout << num << ' ';

        std::cout << '\n';
    }

    return 0;
}