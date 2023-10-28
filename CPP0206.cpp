#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        int maxNum{arr[0]};

        for(int i{1}; i < n; ++i)
        {
            if(maxNum < arr[i])
                maxNum = arr[i];
        }

        std::cout << maxNum << '\n';

        delete[] arr;
    }

    return 0;
}