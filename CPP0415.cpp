#include<iostream>
#include<algorithm>
#include<typeinfo>

void input(int* arr, int length)
{
    for(int i{0}; i < length; ++i)
        std::cin >> *(arr + i);
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int m{};
        std::cin >> n >> m;

        int* first{new int[n]{}};
        int* second{new int[m]{}};

        input(first, n);
        input(second, m);

        std::sort(first, first + n);
        std::sort(second, second + m);

        std::cout << static_cast<long long>(first[n - 1]) * static_cast<long long>(second[0]) << '\n';

        delete[] first;
        delete[] second;
    }

    return 0;
}