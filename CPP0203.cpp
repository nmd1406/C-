#include<iostream>


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

        int x{1};

        while(true)
        {
            bool flag{true};
            for(int i{0}; i < n; ++i)
            {
                if(array[i] == x)
                {
                    flag = false;
                    break;
                }
            }

            if(!flag)
                ++x;
            else
                break;
        }

        std::cout << x << '\n';

        delete[] array;
    }

    return 0;
}