#include<iostream>
#include<fstream>
#include<set>

int main()
{
    std::ifstream in{"DATA.in"};

    int n{};
    int m{};
    in >> n >> m;

    int arr1[n];
    int arr2[m];
    std::set<int> stream1{};
    std::set<int> stream2{};

    for(int& i : arr1)
    {
        in >> i;
        stream1.insert(i);
    }
    for(int& i : arr2)
    {
        in >> i;
        stream2.insert(i);
    }

    for(int itr : stream1)
    {
        if(stream2.find(itr) != stream2.end())
            std::cout << itr << ' ';
    }

    return 0;
}