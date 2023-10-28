#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n - 1]{}};

        long long sum{};
        for(int i{0}; i < n - 1; ++i)
        {
            std::cin >> arr[i];
            sum += arr[i];
        }

        std::cout << (n + 1) * n / 2 - sum << '\n';

        delete[] arr;
    }

    return 0;
}