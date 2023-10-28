#include<iostream>

int n{};
int arr[100]{};
bool isUsed[100]{};

void output()
{
    for(int i{1}; i <= n; ++i)
        std::cout << arr[i];

    std::cout << ' ';
}

void backTracking(int i = 1)
{
    for(int j{1}; j <= n; ++j)
    {
        if(!isUsed[j])
        {
            arr[i] = j;
            isUsed[j] = true;

            if(i == n)
                output();
            else
                backTracking(i + 1);

            isUsed[j] = false;
        }
    }
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::cin >> n;
        backTracking();

        std::cout << '\n';
    }
    return 0;
}