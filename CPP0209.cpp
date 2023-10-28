#include<iostream>
#include<utility>

struct Pair
{
    int first{};
    int second{};
};

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int q{};
        std::cin >> n >> q;

        int* arr{new int[n]{}};
        for(int i{0}; i < n; ++i)
            std::cin >> arr[i];

        Pair* pair{new Pair[q]{}};
        for(int i{0}; i < q; ++i)
            std::cin >> pair[i].first >> pair[i].second;

        for(int i{0}; i < q; ++i)
        {
            int sum{0};
            for(int j{pair[i].first - 1}; j < pair[i].second; ++j)
                sum += arr[j];

            std::cout << sum << '\n';
        }

        delete[] arr;
        delete[] pair;
    }

    return 0;
}