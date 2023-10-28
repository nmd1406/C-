#include<iostream>
#include<vector>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        char ch{' '};
        std::vector<int> numContainer{};

        int countOdd{};
        int countEven{};

        while(ch != '\n')
        {
            int temp{};
            std::cin >> temp;
            numContainer.push_back(temp);

            if(temp % 2 == 0)
                ++countEven;
            else
                ++countOdd;

            ch = getchar();
        }

        int size{static_cast<int>(numContainer.size())};
        if((size % 2 == 0) && (countEven > countOdd))
            std::cout << "YES\n";
        else if((size % 2 == 1) && (countOdd > countEven))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }

    return 0;
}