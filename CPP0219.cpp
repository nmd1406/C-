#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int m{};
        std::cin >> n >> m;

        int row[100]{};
        int col[100]{};
        int arr[100][100]{};
        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < m; ++j)
            {
                std::cin >> arr[i][j];
                if(arr[i][j] == 1)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < m; ++j)
            {
                if(row[i] || col[j])
                    std::cout << 1 << ' ';
                else
                    std::cout << 0 << ' ';
            }

            std::cout << '\n';
        }
    }
    return 0;
}