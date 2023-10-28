#include<iostream>

void sinh(int n, int k, int* arr, bool& stop)
{
    int i{k};
    while(i >= 1 && arr[i] == n - k + i)
        --i;

    if(!i)
        stop = true;
    else
    {
        ++arr[i];
        for(int j{i + 1}; j <= k; ++j)
            arr[j] = arr[j - 1] + 1;
    }

}

int main()
{   
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int k{};
        std::cin >> n >> k;

        int* arr{new int[n + 2]{}};
        for(int i{1}; i <= n; ++i)
            arr[i] = i;

        bool stop{false};
        while(!stop)
        {
            for(int i{1}; i <= k; ++i)
                std::cout << arr[i];
            sinh(n, k, arr, stop);

            std::cout << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}