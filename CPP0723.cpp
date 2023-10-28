#include<iostream>
#include<string>
#include<algorithm>

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        int n{};
        std::cin >> n;
        std::string number{};
        std::cin >> number;

        std::string res{};
        for(char ch : number)
        {
            switch(ch)
            {
                case '2':
                    res += "2";
                    break;
                case '3':
                    res += "3";
                    break;
                case '4':
                    res += "322";
                    break;
                case '5':
                    res += "5";
                    break;
                case '6':
                    res += "53";
                    break;
                case '7':
                    res += "7";
                    break;
                case '8':
                    res += "7222";
                    break;
                case '9':
                    res += "7332";
                    break;
            }
        }

        std::sort(res.rbegin(), res.rend());
        std::cout << res << '\n';
    }

    return 0;
}