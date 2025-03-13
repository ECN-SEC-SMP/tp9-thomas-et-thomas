#include <iostream>
#include <algorithm>
#include <vector>

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
    
    return 0;
}
