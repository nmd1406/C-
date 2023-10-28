#include<iostream>
#include<string>

bool bienSoTangChat(std::string& str)
{
    if(str[5] < str[6] && str[6] < str[7] && str[7] < str[9] && str[9] < str[10])
        return true;

    return false;
}

bool bienSoBangNhau(std::string& str)
{
    if(str[5] != str[6]) 
        return false;
    if(str[6] != str[7]) 
        return false;
    if(str[7] != str[9]) 
        return false;
    if(str[9] != str[10]) 
        return false;

    return true;
}

bool bienSoDacBiet(std::string& str)
{
    bool flag1{false};
    bool flag2{false};

    if(str[5] == str[6] && str[6] == str[7])
        flag1 = true;

    if(str[9] == str[10]) 
        flag2 = true;
    if(flag1 && flag2)
        return true;

    return false;
}

bool bienSoLocPhat(std::string& str)
{
    if( (str[5] == '6' || str[5] == '8') && (str[6] == '6' || str[6] == '8') && (str[7] == '6' || str[7] == '8') && (str[9] == '6' || str[9] == '8') && (str[10] == '6' || str[10] == '8') )
        return true;

    return false;
}

int main()
{
    int testCase{};
    std::cin >> testCase;

    while(testCase--)
    {
        std::string str{};
        std::getline(std::cin >> std::ws, str);

        if(bienSoBangNhau(str) || bienSoDacBiet(str) || bienSoLocPhat(str) || bienSoTangChat(str))
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}