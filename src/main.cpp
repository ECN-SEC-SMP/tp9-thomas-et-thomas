#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

#include "fonction.h"
#include "CSV.h"

int main(int argc, char const *argv[])
{
    // Créer un vecteur d'entiers
    std::vector<int> entiers;
    for (int i = 0; i < 3; i++)
    {
        entiers.push_back(i);
    }
    // Afficher le vecteur avec une boucle for et un index
    for (size_t i = 0; i < entiers.size(); i++)
    {
        std::cout << entiers[i] << std::endl;
    }
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec une boucle basée sur la plage
    for (auto &&e : entiers)
    {
        std::cout << e << std::endl;
    }
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec un itérateur
    for (std::vector<int>::iterator it = entiers.begin(); it != entiers.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "----------------" << std::endl;

    // Modifier la taille du vecteur en ajoutant un élément
    std::cout << "Taille: " << entiers.size() << std::endl;
    entiers.push_back(3);
    std::cout << "Taille: " << entiers.size() << std::endl;

    // Copier un vecteur
    std::vector<int> entiers_copie;
    std::copy(entiers.begin(), entiers.end(), std::back_inserter(entiers_copie));

    // ----------------------------------------------------------------------------------
    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // Créer un vecteur de chaînes de caractères
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

    // Afficher le vecteur avec une boucle for et un index
    for (size_t i = 0; i < string.size(); i++)
    {
        std::cout << string[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec une boucle basée sur la plage
    for (auto &&s : string)
    {
        std::cout << s << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec un itérateur
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Échanger les 2ème et 4ème éléments
    string[1].swap(string[3]);

    // Afficher le vecteur avec un itérateur
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Insérer un nouvel élément à la 2ème position
    string.insert(string.begin()+1, "a tous");

    // Afficher le vecteur avec un itérateur
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Supprimer le dernier élément
   string.pop_back();
   // Ajouter la ponctuation correcte à la fin
   string.push_back("???");

   // Afficher le vecteur avec un itérateur
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec un itérateur avec des virgules
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << ",";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Trier le vecteur
    std::sort(string.begin(),string.end());

    // Afficher le vecteur avec un itérateur
    for (std::vector<std::string>::iterator it = string.begin(); it != string.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    // Afficher le vecteur avec la fonction afficheVector()
    afficheVector(string);

    // Concaténer tous les éléments du vecteur et afficher le résultat
    std::cout << concatener(string) << std::endl;

    // Ajouter une virgule après chaque élément du vecteur et afficher le résultat
    ajoute_virgule(string);
    // Afficher le vecteur avec la fonction afficheVector()
    afficheVector(string);

    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // Créer une liste
    std::list<int> l = {7, 5, 16, 8, 22, 1, 3, 30};
    // Afficher la liste
    for (auto &&e : l)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;
    
    // Supprimer le 3ème élément
    auto it = l.begin(); // Obtenir un itérateur vers le premier élément
    std::advance(it, 2); // Ajouter 2 à l'itérateur
    l.erase(it); // Supprimer le 3ème élément

    // Afficher la liste à nouveau
    for (auto &&e : l)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    std::cout << "----------------------------------------------------------------------------------" << std::endl;

    // Lire les dates à partir d'un fichier CSV
    std::map<int, std::string> dates;
    readCSV("dates.csv", dates);
    for (auto &&pair : dates)
    {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }
    std::cout << "----------------" << std::endl;

    // Écrire de nouvelles données dans un fichier CSV
    std::map<int, std::string> new_data;
    new_data[2020] = "Covid-19";
    new_data[2021] = "Vaccin";
    new_data[2022] = "Confinement";
    writeCSV("new_data.csv", new_data);
    
    return 0;
}
