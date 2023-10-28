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

        int arr[101][101]{};
        int res[101][101]{};

        for(int i{}; i < n; ++i)
        {
            for(int j{}; j < m; ++j)
                std::cin >> arr[i][j];
        }

        int startCol{};
        int endCol{m - 1};
        int startRow{};
        int endRow{n - 1};

        while(startCol < endCol && startRow < endRow)
        {
            res[startRow][startCol] = arr[startRow + 1][startCol];
            for(int i{startCol + 1}; i <= endCol; ++i)
                res[startRow][i] = arr[startRow][i - 1];
            ++startRow;

            for(int i{startRow}; i <= endRow; ++i)
                res[i][endCol] = arr[i - 1][endCol];
            --endCol;

            if(startRow <= endRow)
            {
                for(int i{endCol}; i >= startCol; --i)
                    res[endRow][i] = arr[endRow][i + 1];
                --endRow;
            }
            if(startCol <= endCol)
            {
                for(int i{endRow}; i >= startRow; --i)
                    res[i][startCol] = arr[i + 1][startCol];
                ++startCol;
            }
        }

        for(int i{}; i < n; ++i)
        {
            for(int j{}; j < m; ++j)
            {
                if(res[i][j] == 0)
                    std::cout << arr[i][j] << ' ';
                else
                    std::cout << res[i][j] << ' ';
            }
        }

        std::cout << '\n';
    }

    return 0;
}