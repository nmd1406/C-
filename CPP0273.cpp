#include<iostream>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;
        int arr[n];
        for(int i{}; i < n; ++i)
            std::cin >> arr[i];

        bool check{false};
        for(int i{}; i < n; ++i)
        {
            int sumLeft{};
            int sumRight{};

            for(int j{}; j < i; ++j)
                sumLeft += arr[j];
            for(int j{i + 1}; j < n; ++j)
                sumRight += arr[j];

            if(sumLeft == sumRight)
            {
                std::cout << i + 1 << '\n';
                check = true;
                break; 
            }
        }

        if(!check)
            std::cout << -1 << '\n';
    }

    return 0;
}