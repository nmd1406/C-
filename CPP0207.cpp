#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int d{};
        std::cin >> n >> d;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        for(int i{d}; i < n; ++i)
            std::cout << arr[i] << ' ';
        for(int i{0}; i < d; ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}