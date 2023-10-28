#include<iostream>
#include<cmath>

bool isSphenic(int n)
{
    int count{};
    
    for(int i{2}; i <= std::sqrt(n); ++i)
    {
        int anotherCount{};
        while(n % i == 0)
        {
            ++anotherCount;
            n /= i;
        }

        if(anotherCount > 1)
            return false;
        else if(anotherCount == 1)
            ++count;
    }

    if(n != 1)
        ++count;
    if(count != 3)
        return false;

    return true;

}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;

        std::cout << isSphenic(n) << '\n';
    }

    return 0;
}