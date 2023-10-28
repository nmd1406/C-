#include<iostream>
#include<vector>
#include<algorithm>

bool binarySearch(long long arr[], int n, long long target)
{
    int l{};
    int r{n - 1};
    
    while(l <= r)
    {
        int mid{(l + r) / 2};

        if(arr[mid] == target)
            return true;

        if(arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

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
        long long arr[n];

        for(int i{}; i < n; ++i)
        {
            long long x{};
            std::cin >> x;
            arr[i] = x * x;
        }

        std::sort(arr, arr + n);
        
        bool check{false};
        for(int i{}; i < n - 1; ++i)
        {
            for(int j{i + 1}; j < n; ++j)
            {
                if(std::binary_search(arr, arr + n, arr[i] + arr[j]))
                {
                    check = true;
                    break;
                }
            }
        }

        if(check)
            std::cout << "YES\n";
        else  
            std::cout << "NO\n";
    }

    return 0;
}