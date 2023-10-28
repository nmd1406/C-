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

        if(numSet.size() < 2)
            std::cout << -1 << '\n';
        else
        {
            std::cout << *std::next(numSet.begin(), 0) << ' ' << *std::next(numSet.begin(), 1) << '\n';
        }
    }

    return 0;
}