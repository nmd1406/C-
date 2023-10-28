#include<iostream>
#include<cmath>

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

        int sum{};
        int absSum{std::abs(arr[0] + arr[1])};

        for(int i{0}; i < n - 1; ++i)
        {
            for(int j{i + 1}; j < n; ++j)
            {
                if(std::abs(arr[i] + arr[j]) < absSum)
                {
                    absSum = std::abs(arr[i] + arr[j]);
                    sum = arr[i] + arr[j];
                } 
            }
        }

        std::cout << sum << '\n';

        delete[] arr;
    }

    return 0;
}