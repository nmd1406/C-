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

        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        int l{};
        int r{};
        std::cin >> l >> r;

        while(arr[l] <= arr[l + 1] && l < r)
            ++l;
        while(arr[r] < arr[r - 1] && l < r)
            --r;

        if(r != l)
            std::cout << "No\n";
        else
            std::cout << "Yes\n";

        delete[] arr;     
    }

    return 0;
}