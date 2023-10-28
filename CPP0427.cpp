#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;
        int arr[n]{};
        for(int i{}; i < n; ++i)
        {
            std::cin >> arr[i];
            if(arr[i] == arr[i - 1])
            {
                arr[i - 1] *= 2;
                arr[i] = 0;
            }
        }

        int count{};
        for(int i{}; i < n; ++i)
        {
            if(arr[i])
                std::cout << arr[i] << ' ';
            else
                ++count;
        }

        for(int i{}; i < count; ++i)
            std::cout << 0 << ' ';

        std::cout << '\n';
    }

    return 0;
}