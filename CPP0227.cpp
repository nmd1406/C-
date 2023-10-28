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
            if(i % 2 == 0)
            {
                for(int j{0}; j < n; ++j)
                    std::cout << arr[i][j] << ' ';
            }
            if(i % 2 == 1) 
            {
                for(int j{n - 1}; j >= 0; --j)
                    std::cout << arr[i][j] << ' ';
            }
        }

        std::cout << '\n';
    }

    return 0;
}