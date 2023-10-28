#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int x{};
        std::cin >> n >> x;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        for(int i{0}; i < n; ++i)
        {
            if(arr[i] == x)
            {
                std::cout << i + 1 << '\n';
                break;
            }
        }

        delete[] arr;
    }

    return 0;
}