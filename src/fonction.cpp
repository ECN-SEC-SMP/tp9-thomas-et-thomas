#include "fonction.h"


void afficheVector(std::vector<std::string> const &a)
{
    for (auto &&s : a)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
}

std::string concatener(std::vector<std::string> const &a)
{
    std::string sentence;
    for (auto &&s : a)
    {
        sentence += s + " ";
    }
    return sentence;

}

void ajoute_virgule(std::vector<std::string> &a)
{
    for (auto &&s : a)
    {
        s.push_back(',');
    }
}