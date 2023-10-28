#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    int arr[100][100];

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < n; ++j)
                std::cin >> arr[i][j];
        }

        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < n; ++j)
            {
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                    std::cout << arr[i][j] << ' ';
                else
                    std::cout << ' ';
            }

            std::cout << '\n';
        }
    }
    return 0;
}