#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};

        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        std::sort(arr, arr + n);

        std::vector<int> maxToMin{};

        if(n % 2 == 0)
        {
            for(int i{0}; i < n / 2; ++i)
            {
                maxToMin.push_back(arr[n - 1 - i]);
                maxToMin.push_back(arr[i]);
            }
        }
        else
        {
            for(int i{0}; i < n / 2; ++i)
            {
                maxToMin.push_back(arr[n - 1 - i]);
                maxToMin.push_back(arr[i]);
            }
            maxToMin.push_back(arr[(n - 1) / 2]);
        }

        for(int element : maxToMin)
            std::cout << element << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}