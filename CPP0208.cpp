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

        std::cout << arr[k - 1] << '\n';

        delete[] arr;
    }

    return 0;
}