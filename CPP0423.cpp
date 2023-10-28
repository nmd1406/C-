#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int k{};
        std::cin >> n >> k;

        int arr[n]{};
        int windowSize{};
        for(int i{}; i < n; ++i)
        {
            std::cin >> arr[i];
            if(arr[i] <= k)
                ++windowSize;
        }

        int count{};
        for(int i{}; i < windowSize; ++i)
        {
            if(arr[i] <= k)
                ++count;
        }
        int max{count};

        for(int i{windowSize}; i < n; ++i)
        {
            if(arr[i - windowSize] <= k)
                --count;
            if(arr[i] <= k)
                ++count;

            max = max < count ? count : max;
        }
        std::cout << windowSize - max << '\n';
    }

    return 0;
}