#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int k{};
        std::cin >> n >> k;

        int* arr{new int[n]{}};
        // std::set<int> numSet{};
        for(int i{}; i < n; ++i)
        {
            std::cin >> arr[i];
            // numSet.insert(arr[i]);
        }

        std::sort(arr, arr + n);
        std::cout << arr[k - 1] << '\n';
        // std::set<int>::iterator itr{std::next(numSet.begin(), k - 1)};

        // std::cout << *itr << '\n';
    }

    return 0;
}