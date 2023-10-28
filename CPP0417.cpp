#include<iostream>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;
        int a[n]{};
        int b[n]{};
        
        for(int i{}; i < n; ++i)
        {
            std::cin >> a[i];
            b[i] = a[i];
        }

        std::sort(b, b + n);
        int left{};
        int right{};

        for(int i{}; i < n; ++i)
        {
            if(a[i] != b[i])
            {
                left = i + 1;
                break;
            }
        }
        for(int i{n - 1}; i >= 0; --i)
        {
            if(a[i] != b[i])
            {
                right = i + 1;
                break;
            }
        }

        std::cout << left << ' ' << right << '\n';
    }

    return 0;
}