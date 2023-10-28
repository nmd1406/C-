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

        std::multiset<long long> numSet{};
        for(int i{0}; i < n; ++i)
        {
            long long temp{};
            std::cin >> temp;
            numSet.insert(temp);
        }

        for(int i{0}; i < n; ++i)
        {
            if(numSet.find(i) != numSet.end())
                std::cout << i << ' ';
            else
                std::cout << -1 << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}