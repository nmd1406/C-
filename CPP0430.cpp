#include<iostream>
#include<set>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::set<int> numSet{};
        for(int i{0}; i < n; ++i)
        {
            int temp{};
            std::cin >> temp;
            numSet.insert(temp);
        }

        int l{*numSet.rbegin()};
        int r{*numSet.begin()};

        std::cout << (l - r + 1 - static_cast<int>(numSet.size())) << '\n';
    }

    return 0;
}