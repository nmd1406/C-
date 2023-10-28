#include<iostream>
#include<set>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        int m{};
        std::cin >> n >> m;

        std::set<int> arr1{};
        std::set<int> arr2{};

        std::set<int> uni{};
        for(int i{}; i < n; ++i)
        {
            int temp{};
            std::cin >> temp;
            arr1.insert(temp);
            uni.insert(temp);
        }

        for(int i{}; i < m; ++i)
        {
            int temp{};
            std::cin >> temp;
            arr2.insert(temp);
            uni.insert(temp);
        }

        for(auto i : uni)
            std::cout << i << ' ';

        std::cout << '\n';

        for(auto i : arr1)
        {
            if(arr2.find(i) != arr2.end())
                std::cout << i << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}