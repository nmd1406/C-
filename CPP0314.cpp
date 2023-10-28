#include<iostream>
#include<set>
#include<string>

int main()
{
    int n{};
    std::cin >> n;

    std::set<std::string> cmnm{};
    for(int i{0}; i < n; ++i)
    {
        std::string temp{};
        std::getline(std::cin >> std::ws, temp);

        cmnm.insert(temp);
    }

    std::cout << cmnm.size();
    return 0;
}