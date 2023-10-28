#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr1{new int[n]{}};
        int* arr2{new int[n]{}};

        for(int i{}; i < n; ++i)
            std::cin >> arr1[i];

        for(int i{}; i < n; ++i)
            std::cin >> arr2[i];

        int maxLength{};
        for(int i{}; i < n; ++i)
        {
            int sum1{};
            int sum2{};

            for(int j{i}; j < n; ++j)
            {
                sum1 += arr1[j];
                sum2 += arr2[j];

                if(sum1 == sum2)
                {
                    int length = j - i + 1;
                    if(length > maxLength)
                        maxLength = length;
                }
            }
        }

        std::cout << maxLength << '\n';

        delete[] arr1;
        delete[] arr2;
    }

    return 0;
}