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

        int* arr{new int[n]{}};
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        std::vector<long long> res{};
        res.push_back(arr[0] * arr[1]);

        for(int i{1}; i < n - 1; ++i)
            res.push_back(arr[i - 1] * arr[i + 1]);
        
        res.push_back(arr[n - 1] * arr[n - 2]);

        for(auto i : res)
            std::cout << i << ' ';

        std::cout << '\n';
    }
    return 0;
}