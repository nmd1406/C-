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

        int arr[n]{};
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        std::sort(arr, arr + n);
        for(int i{}; i < n / 2; ++i)
            std::cout << arr[n - i - 1] << ' ' << arr[i] << ' ';
        
        if(n % 2 == 1)
            std::cout << arr[(n - 1) / 2];
        
        std::cout << '\n';
    }

    return 0;
}