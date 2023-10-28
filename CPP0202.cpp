#include<iostream>
#include<algorithm>
#include<cmath>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* array{new int[n]{}};

        for(int i{0}; i < n; ++i)
            std::cin >> array[i];

        std::sort(array, array + n);

        int minLength{(array[1] - array[0])};

        for(int i{1}; i < n - 1; ++i)
        {
            int temp{(array[i + 1] - array[i])};
            if(minLength > temp)
                minLength = temp;
        }

        std::cout << minLength << '\n';

        delete[] array;
    }
    return 0;
}