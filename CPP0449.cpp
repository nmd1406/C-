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
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        std::sort(arr, arr + n);

        bool flag{false};
        for(int i{}; i < n; ++i)
        {
            if(std::binary_search(arr, arr + n, arr[i] + x))
            {
                flag = true;
                break;
            }
        }

        if(flag)
            std::cout << 1 << '\n';
        else
            std::cout << -1 << '\n';
    }

    return 0;
}