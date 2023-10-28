#include<iostream>

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

        bool flag{false};
        for(int i{0}; i < n; ++i)
        {
            if(arr[i] == x)
            {
                flag = true;
                std::cout << i + 1 << '\n';
                break;
            }
        }

        if(!flag)
            std::cout << -1 << '\n';

        delete[] arr;
    }

    return 0;
}