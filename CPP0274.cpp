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
        int* countNum{new int[1000000]{}};

        for(int i{0}; i < n; ++i)
        {
            std::cin >> arr[i];
            countNum[arr[i]]++;
        }

        int count{};
        for(int i{0}; i < n; ++i)
        {
            if(countNum[arr[i]] > 1)
            {
                count += countNum[arr[i]];
                countNum[arr[i]] = 0;
            }
        }

        std::cout << count << '\n';

        delete[] arr;
        delete[] countNum;
    }

    return 0;
}