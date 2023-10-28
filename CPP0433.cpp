#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<utility>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::map<int, int> numMap{};
        int* arr{new int[n]{}};
        for(int i{}; i < n; ++i)
        {
            std::cin >> arr[i];
            numMap[arr[i]]++;
        }

        std::vector<std::pair<int, int>> pairMap{};
        for(auto itr : numMap)
            pairMap.push_back(std::make_pair(itr.first, itr.second));

        std::sort(pairMap.begin(), pairMap.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) 
        {
            if(a.second == b.second)
                return a.first < b.first;

            return a.second > b.second;
        });

        for(auto itr : pairMap)
        {
            while(itr.second--)
                std::cout << itr.first << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}