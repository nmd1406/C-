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
        int arr[100][100];

        for(int i{0}; i < n; ++i)
        {
            for(int j{0}; j < m; ++j)
                std::cin >> arr[i][j];
        }

        int startingCol{};
        int endingCol{m - 1};
        int startingRow{};
        int endingRow{n - 1};

        while(startingCol <= endingCol && startingRow <= endingRow)
        {
            for(int i{startingCol}; i <= endingCol; ++i)
                std::cout << arr[startingRow][i] << ' ';
            
            ++startingRow;

            for(int i{startingRow}; i <= endingRow; ++i)
                std::cout << arr[i][endingCol] << ' ';

            --endingCol;

            if(startingRow <= endingRow)
            {
                for(int i{endingCol}; i >= startingCol; --i)
                    std::cout << arr[endingRow][i] << ' ';

                --endingRow;
            }

            if(startingCol <= endingCol)
            {
                for(int i{endingRow}; i >= startingRow; --i)
                    std::cout << arr[i][startingCol] << ' ';

                ++startingCol;
            }
        }

        std::cout << '\n';
    }

    return 0;
}