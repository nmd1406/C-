#include<iostream>
#include<set>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        int* arr{new int[n]{}};
        std::set<int> chuSo{};

        for(int i{0}; i < n; ++i)
        {
            std::cin >> arr[i];

            while(arr[i])
            {
                chuSo.insert(arr[i] % 10);
                arr[i] /= 10;
            }
        }

        for(int i : chuSo)
            std::cout << i << ' ';

        std::cout << '\n';

        delete[] arr;
    }

    return 0;
}