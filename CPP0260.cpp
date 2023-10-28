#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr;
    for(int i{}; i < n * n; ++i)
    {
        int num{};
        std::cin >> num;
        arr.push_back(num);
    }

    std::sort(arr.begin(), arr.end());

    int startRow = 0;
    int startCol = 0;
    int endRow = n - 1;
    int endCol = n - 1;

    int itr{};
    std::vector<std::vector<int>> res{};
    res.resize(n, std::vector<int>(n));

    // for(int i{}; i < n; ++i)
    // {
    //     for(int j{}; j < n; ++j)
    //         res[i][j] = arr[itr++];
    // }

    while(startRow <= endRow && startCol <= endCol)
    {
        for(int i = startCol; i <= endCol; ++i)
            res[startRow][i] = arr[itr++];
        ++startRow;

        for(int i = startRow; i <= endRow; ++i)
            res[i][endCol] = arr[itr++];
        --endCol;

        if(startRow <= endRow)
        {
            for(int i = endCol; i >= startCol; --i)
                res[endRow][i] = arr[itr++];
            --endRow;
        }

        if(startCol <= endCol)
        {
            for(int i = endRow; i >= startRow; --i)
                res[i][startCol] = arr[itr++];
            ++startCol;
        }

    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            std::cout << res[i][j] << ' ';
        std::cout << '\n';
    }
    return 0;
}