#include<iostream>
#include<fstream>
#include<map>

int main()
{
    std::ifstream in;
    in.open("DATA.in");

    std::map<int, int> numMap{};
    int num{};

    while(in >> num)
        numMap[num]++;

    for(auto itr : numMap)
        std::cout << itr.first << ' ' << itr.second << '\n';

    in.close();
    return 0;
}