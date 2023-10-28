#include<iostream>

void arrayInput(int arr[][50], int row, int col)
{
    for(int i{0}; i < row; ++i)
    {
        for(int j{0}; j < col; ++j)
            std::cin >> arr[i][j];
    }
}

int main()
{
    int n{};
    int m{};
    int p{};
    std::cin >> n >> m >> p;

    int a[50][50]{};
    int b[50][50]{};
    int c[50][50]{};

    arrayInput(a, n, m);
    arrayInput(b, m, p);

    for(int i{0}; i < n; ++i)
    {
        for(int j{0}; j < p; ++j)
        {
            for(int k{0}; k < m; ++k)
                c[i][j] += (a[i][k] * b[k][j]);
        }
    }

    for(int i{0}; i < n; ++i)
    {
        for(int j{0}; j < p; ++j)
            std::cout << c[i][j] << ' ';

        std::cout << '\n';
    }
    return 0;
}