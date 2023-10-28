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
        int count{};

        for(int i{0}; i < n; ++i)
        {
            std::cin >> arr[i];
            
            if(arr[i] == x)
                ++count;
        }

        if(count)
            std::cout << count << '\n';
        else
            std::cout << -1 << '\n';

        delete[] arr;
    }

    return 0;
}