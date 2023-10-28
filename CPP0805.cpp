#include<iostream>
#include<fstream>
#include<set>
#include<string>
#include<cctype>

int main()
{
    std::ifstream in1{"DATA1.in"};
    std::ifstream in2{"DATA2.in"};

    std::string token{};
    std::set<std::string> hop{};
    std::set<std::string> stream1{};
    std::set<std::string> stream2{};

    while(in1 >> token)
    {
        for(char& ch : token)
            ch = tolower(ch);

        hop.insert(token);
        stream1.insert(token);
    }
    while(in2 >> token)
    {
        for(char& ch : token)
            ch = tolower(ch);
            
        hop.insert(token);
        stream2.insert(token);
    }

    for(auto itr : hop)
        std::cout << itr << ' ';
    
    std::cout << '\n';

    for(auto itr : stream1)
    {
        if(stream2.find(itr) != stream2.end())
            std::cout << itr << ' ';
    }

    in1.close();
    in2.close();
    return 0;
}