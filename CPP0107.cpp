#include<iostream>
#include<string>
#include<iomanip>

int main()
{
    int testCase{};
    std::cin >> testCase;

    std::string x{"101 A B B A D C C A B D C C A B D"};
    std::string y{"102 A C C A B C D D B B C D D B B"};

    int lengthX{static_cast<int>(x.length())};
    int lengthY{static_cast<int>(y.length())};

    const double pointPerQuestion{10.0 / 15};

    while(testCase--)
    {
        std::string submit{};
        std::getline(std::cin >> std::ws, submit);

        double maxPoint{10.0};

        switch(submit[2])
        {
            case '1':
                for(int i{4}; i < lengthX; i += 2)
                {
                    if(submit[i] != x[i])
                        maxPoint -= pointPerQuestion;
                }
                break;
            
            case '2':
                for(int i{4}; i < lengthX; i += 2)
                {
                    if(submit[i] != y[i])
                        maxPoint -= pointPerQuestion;
                }
                break;
        }

        std::cout << std::setprecision(2) << std::fixed << maxPoint << '\n';
    }

    return 0;
}