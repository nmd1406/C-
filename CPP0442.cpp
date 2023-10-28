#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int x{};
        std::cin >> n >> x;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        auto found{std::find(arr, arr + n, x)};
        if(found != (arr + n))
            std::cout << 1 << '\n';
        else
            std::cout << -1 << '\n';

        delete[] arr;
    }

    return 0;
}