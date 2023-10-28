#include<iostream>
#include<string>
#include<sstream>
#include<cctype>
#include<vector>

bool ngatCau(std::string& str)
{
    if(str[str.length() - 1] == '.' || str[str.length() - 1] == '?' || str[str.length() - 1] == '!')
        return true;

    return false;
}

int main()
{
    // std::string str{};
    // std::getline(std::cin >> std::ws, str);

    // std::stringstream ss{str};
    std::string token{};
    std::string sentence{""};
    std::vector<std::string> sentences{};

    while(std::cin >> token)
    {
        if(sentence == "")
            sentence += token;
        else
            sentence = sentence + ' ' + token;

        if(ngatCau(sentence))
        {
            sentence.pop_back();
            sentence[0] = toupper(sentence[0]);

            for(int i{1}; i < sentence.length(); ++i)
                sentence[i] = tolower(sentence[i]);

            // std::cout << sentence << ' ';
            sentences.push_back(sentence);
            sentence = "";
        }
    }

    std::cout << '\n';
    for(std::string s : sentences)
        std::cout << s << '\n';

    return 0;
}