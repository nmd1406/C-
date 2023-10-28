#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while (testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        bool found{false};

        int max{static_cast<int>(-10e9)};
        for(int i{}; i < n - 1; ++i)
        {
            for(int j{i + 1}; j < n; ++j)
            {
                if(arr[i] < arr[j] && max < arr[j] - arr[i])
                {
                    max = arr[j] - arr[i];
                    found = true;
                }
            }
        }

        if(found)
            std::cout << max << '\n';
        else
            std::cout << -1 << '\n';

        delete[] arr;
    }
    
    return 0;
}