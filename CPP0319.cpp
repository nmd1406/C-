#include<iostream>

void smallestNum(int m, int s)
{
    int arr[100];
    --s;
    for(int i{m - 1}; i > 0; --i)
    {
        if(s > 9)
        {
            arr[i] = 9;
            s -= 9;
        }
        else
        {
            arr[i] = s;
            s = 0;
        }
    }

    arr[0] = s + 1;

    for(int i{0}; i < m; ++i)
        std::cout << arr[i];
}

void largestNum(int m, int s)
{
    int arr[100];
    for(int i{0}; i < m; ++i)
    {
        if(s > 9)
        {
            arr[i] = 9;
            s -= 9;
        }
        else
        {
            arr[i] = s;
            s = 0;
        }
    }

    for(int i{0}; i < m; ++i)
        std::cout << arr[i];
}

int main()
{
    int m{};
    int s{};
    std::cin >> m >> s;

    if((s > 9 * m) || (m > 0 && s == 0))
        std::cout << "-1 -1";
    else
    {
        smallestNum(m, s);
        std::cout << ' ';
        largestNum(m, s);
    }

    return 0;
}