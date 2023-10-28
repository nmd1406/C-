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

        int minPos{1000000};
        for(int i{0}; i < n - 1; ++i)
        {
            for(int j{i + 1}; j < n; ++j)
            {
                if(arr[i] == arr[j])
                {
                    if(minPos > j)
                        minPos = j;
                }
            }
        }
        
        if(minPos == 1000000)
            std::cout << -1 << '\n';
        else
            std::cout << arr[minPos] << '\n';

        delete[] arr;
    }
    return 0;
}