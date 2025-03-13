#pragma once

#include <iostream>
#include <fstream> 
#include <string>
#include <map>

/**
 * @brief Lit un fichier CSV et stocke son contenu dans une map.
 * 
 * @details
 * Cette fonction lit un fichier CSV où chaque ligne contient une paire clé-valeur séparée par un point-virgule.
 * Elle stocke les paires clé-valeur dans la map fournie.
 * 
 * @param filename Le chemin vers le fichier CSV à lire.
 * @param data Une référence à une map où les paires clé-valeur seront stockées.
 */
void readCSV(std::string filename, std::map<int, std::string> &data)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Erreur : fichier non trouvé" << std::endl;
        return;
    }
    data.clear();
    for (std::string line; std::getline(file, line);)
    {
        size_t pos = line.find(";"); // Séparateur CSV
        int key = std::stoi(line.substr(0, pos));
        std::string value = line.substr(pos + 1, line.npos);
        data[key] = value;
    }
    file.close();
}

/**
 * @brief Écrit le contenu d'une map dans un fichier CSV.
 * 
 * @details
 * Cette fonction écrit les paires clé-valeur de la map fournie dans un fichier CSV.
 * Chaque paire clé-valeur est écrite sur une nouvelle ligne, séparée par un point-virgule.
 * 
 * @param filename Le chemin vers le fichier CSV à écrire.
 * @param data Une référence à une map contenant les paires clé-valeur à écrire.
 */
void writeCSV(std::string filename, std::map<int, std::string> &data)
{
    std::ofstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Erreur : fichier non trouvé" << std::endl;
        return;
    }
    file.clear();
    for (auto &&pair : data)
    {
        file << pair.first << ";" << pair.second << std::endl;
    }
    file.close();
}