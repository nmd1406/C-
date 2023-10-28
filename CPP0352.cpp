#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
#include<vector>
#include<map>

int main()
{
    int testCase{};
    std::cin >> testCase;

    std::map<std::string, int> duplicate{};
    while(testCase--)
    {
        std::string name{};
        std::getline(std::cin >> std::ws, name);

        for(char& ch : name)
            ch = tolower(ch);
        
        std::vector<std::string> words{};
        std::stringstream ss{name};
        std::string token{};

        while(ss >> token)
            words.push_back(token);

        std::string res{};
        int length{static_cast<int>(words.size())};
        res += words[length - 1];
        
        for(int i{}; i < length - 1; ++i)
            res += words[i][0];
        
        duplicate[res]++;
        if(duplicate[res] == 1)
            std::cout << res << "@ptit.edu.vn\n";
        else if(duplicate[res] > 1)
            std::cout << res << duplicate[res] << "@ptit.edu.vn\n";
    }
    return 0;
}