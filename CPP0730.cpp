#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while (testCase--)
    {
        int n{};
        std::cin >> n;
        long long arr[n]{};

        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        long long sum{arr[0]};
        long long maxSum{arr[0]};

        for(int i{1}; i < n; ++i)
        {
            sum = (sum + arr[i]) < arr[i] ? arr[i] : (sum + arr[i]);
            maxSum = maxSum < sum ? sum : maxSum;
        }

        std::cout << maxSum << '\n';
    }
    

    return 0;
}