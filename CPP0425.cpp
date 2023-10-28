#include<iostream>
#include<algorithm>

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

        bool* flag{new bool[n]{}};
        for(int i{0}; i < n - 1; ++i)
        {
            if(i % 2 == 0 && arr[i] > arr[i + 1] && !flag[i])
            {
                std::swap(arr[i], arr[i + 1]);
                flag[i + 1] = true;
            }
            else if(i % 2 == 1 && arr[i] < arr[i + 1] && !flag[i])
            {
                std::swap(arr[i], arr[i + 1]);
                flag[i + 1] = true;
            }   
        }

        for(int i{}; i < n; ++i)
            std::cout << arr[i] << ' ';

        std::cout << '\n';
    }

    return 0;
}