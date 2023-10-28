#include<iostream>
#include<set>

int main()
{
    int n{};
    std::cin >> n;

    int* arr{new int[n]{}};

    for(int i{0}; i < n; ++i)
        std::cin >> arr[i];

    std::set<int> number{};

    for(int i{0}; i < n; ++i)
        number.insert(arr[i]);

    for(int num : number)
        std::cout << num << ' ';

    delete[] arr;
    return 0;
}