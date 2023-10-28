#include<iostream>

int main()
{
    int n{};
    int k{};
    int b{};
    std::cin >> n >> k >> b;
    int arr[n + 1]{};

    for(int i{}; i < b; ++i)
    {
        int x{};
        std::cin >> x;
        arr[x] = 1;
    }

    int count{};
    for(int i{1}; i <= k; ++i)
    {
        if(arr[i])
            ++count;
    }

    int min{count};
    for(int i{k + 1}; i <= n; ++i)
    {
        count = count - arr[i - k] + arr[i];
        min = min > count ? count : min;
    }

    std::cout << min;
    return 0;
}