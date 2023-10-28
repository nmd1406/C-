#include<iostream>
#include<algorithm>

void sinh(int n, int* arr)
{
    int i{n};
    while(i >= 1 && arr[i] > arr[i - 1])
        --i;

    std::swap(arr[i], arr[i - 1]);
    std::reverse(arr + i, arr + n + 1);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n + 1]{}};
        for(int i{1}; i <= n; ++i)
            std::cin >> arr[i];

        sinh(n, arr);
        for(int i{1}; i <= n; ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}