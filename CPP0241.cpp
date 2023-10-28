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

        int left{};
        int right{n - 1};
        int count{};
        while (left <= right)
        {
            if(arr[left] == arr[right])
            {
                ++left;
                --right;
            }
            else if(arr[left] < arr[right])
            {
                ++left;
                arr[left] += arr[left - 1];
                ++count;
            }
            else
            {
                --right;
                arr[right] += arr[right + 1];
                ++count;
            }
        }
        
        std::cout << count << '\n';
        delete[] arr;
    }

    return 0;
}