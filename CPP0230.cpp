#include<iostream>

int main()
{
    int n{};
    std::cin >> n;

    int arr[n][3]{};
    for(int i{0}; i < n; ++i)
    {
        for(int j{0}; j < 3; ++j)
            std::cin >> arr[i][j];
    }

    int count{};

    for(int i{0}; i < n; ++i)
    {
        int countOne{};
        int countZero{};

        for(int j{0}; j < 3; ++j)
        {
            if(arr[i][j])
                ++countOne;
            else
                ++countZero;

        }
        if(countOne > countZero)
            ++count;
    }

    std::cout << count;

    return 0;
}