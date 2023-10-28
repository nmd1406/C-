#include<iostream>

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

        int count{};
        for(int i{0}; i < n - 1; ++i)
        {
            for(int j{i + 1}; j < n; ++j)
            {
                if(arr[i] + arr[j] == k)
                    ++count;
            }
        }

        std::cout << count << '\n';

        delete[] arr;
    }

    return 0;
}