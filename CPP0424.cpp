#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int k{};
        int n{};
        std::cin >> k >> n;

        int* arr{new int[k * n]{}};
        for(int i{0}; i < (k * n); ++i)
            std::cin >> arr[i];

        std::sort(arr, arr + (k * n));
           
        for(int i{0}; i < (k * n); ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}