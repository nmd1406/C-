#include<iostream>

bool isFibonacci(int x)
{
    if(x == 0)
        return true;

    int a{};
    int b{1};
    int c{};

    while(b < x)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if(b == x)
        return true;
    
    return false;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        for(int i{}; i < n; ++i)
        {
            if(isFibonacci(arr[i]))
                std::cout << arr[i] << ' ';
        }

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}