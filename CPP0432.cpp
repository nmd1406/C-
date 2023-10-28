#include<iostream>
#include<algorithm>
#include<string>

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

        std::sort(arr, arr + n, [](const int a, const int b)
                                {
                                    return (std::to_string(a) + std::to_string(b) > std::to_string(b) + std::to_string(a));
                                });

        for(int i{}; i < n; ++i)
            std::cout << arr[i];

        std::cout << '\n';
    }

    return 0;
}