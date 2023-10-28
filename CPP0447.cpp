#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int k{};
        std::cin >> n >> k;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        std::sort(arr, arr + n);
        for(int i{n - 1}; i >= (n - k); --i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}