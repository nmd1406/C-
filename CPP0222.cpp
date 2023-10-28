#include<iostream>
#include<map>
#include<vector>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::map<int, int> numMap{};

        int arr[n][n];
        for(int i{}; i < n; ++i)
        {
            for(int j{}; j < n; ++j)
                std::cin >> arr[i][j];
        }

        for(int i{}; i < n; ++i)
            numMap[arr[0][i]] = 1;

        int count{};
        for(int i{1}; i < n; ++i)
        {
            for(int j{}; j < n; ++j)
            {
                if(numMap[arr[i][j]] == i)
                    numMap[arr[i][j]]++;
            }
        }

        for(auto itr : numMap)
        {
            if(itr.second == n)
                ++count;
        }
        std::cout << count << '\n';
    }

    return 0;
}