#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};

        while(true)
        {
            for(int i{0}; i < n; ++i)
            std::cout << arr[i];

            std::cout << ' ';

            int j{n - 1};
            while(j >= 0 && arr[j])
            {
                arr[j] = 0;
                --j;
            }

            if(j == -1)
                break;
            else
                arr[j] = 1;
        }

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}