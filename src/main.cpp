#include <iostream>
#include <algorithm>
#include <vector>

#include "fonction.h"

int main(int argc, char const *argv[])
{
    std::vector<int> entiers;
    for (int i = 0; i < 3; i++)
    {
        entiers.push_back(i);
    }
    for (int i = 0; i < entiers.size(); i++)
    {
        std::cout << entiers[i] << std::endl;
    }
    std::cout << "----------------" << std::endl;

    for (auto &&e : entiers)
    {
        std::cout << e << std::endl;
    }
    std::cout << "----------------" << std::endl;

    for (std::vector<int>::iterator it = entiers.begin(); it != entiers.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "----------------" << std::endl;
    
    std::cout << "Size: " << entiers.size() << std::endl;
    entiers.push_back(3);
    std::cout << "Size: " << entiers.size() << std::endl;

    
    std::vector<int> entiers_copie;
    std::copy(entiers.begin(), entiers.end(), std::back_inserter(entiers_copie));

// ----------------------------------------------------------------------------------

    std::vector<std::string> string;
    string.push_back("Bonjour");
    string.push_back("comment");
    string.push_back("allez");
    string.push_back("vous");
    string.push_back("?");
    
    std::cout << "La taille du vecteur est de : " << string.size() << std::endl; // Nombre d'éléments dans le vecteur

    std::cout << "----------------" << std::endl;

    std::cout << "La capacité du vecteur est de : " << string.capacity() << std::endl; // Espace disponible alloué dynamiquement par rapport à la taille

    std::cout << "----------------" << std::endl;

    for (int i = 0; i < string.size(); i++)
    {
        std::cout << string[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    for (auto &&s : string)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    string[1].swap(string[3]);

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    string.insert(string.begin()+1, "a tous");

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

   string.pop_back();
   string.push_back("???");

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << ",";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;


    std::sort(string.begin(),string.end());

    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    afficheVector(string);

    std::cout << concatener(string) << std::endl;

    ajoute_virgule(string);
    afficheVector(string);
    
    return 0;
}
