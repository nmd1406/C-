#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<utility>
#include<algorithm>

bool thuanNghich(std::string& str)
{
    int length{static_cast<int>(str.length())};
    for(int i{}; i < length / 2; ++i)
    {
        if(str[i] != str[length - i - 1])
            return false;
    }

    return true;
}

int main()
{
    std::string str{};
    std::map<std::string, int> strMap{};

    while(std::cin >> str)
    {
        if(thuanNghich(str) && str.length() > 1)
            strMap[str]++;
    }

    std::vector<std::pair<std::string, int>> container{};
    for(auto itr : strMap)
        container.push_back({itr.first, itr.second});
    
    std::sort(container.begin(), container.end(), [](const auto& a, const auto& b)
                                                    {
                                                        if(a.first.length() != b.first.length())
                                                            return a.first.length() > b.first.length();

                                                        return a.first > b.first;
                                                    });

    for(auto itr : container)
        std::cout << itr.first << ' ' << itr.second << '\n';
    return 0;
}