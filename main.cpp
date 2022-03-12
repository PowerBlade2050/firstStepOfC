#include <iostream>

int main()
{
    /* Boucle while:
    std::cout << "Premier comptage jusqu'a 10 !" <<std::endl;
    int compteur { 0 };
    while (compteur < 10)
    {
        std::cout << compteur << std::endl;
        ++compteur;
    }
    std::cout << "La suite plus tard !" << std::endl;
    return 0;
    */
    // Exo Laverie:
    std::cout << "Bienvenue !" << std::endl;
    std::cout << "Combien de kilo de linge ?" << std::endl;
    int poids { 0 };
    std::cin >> poids;
    std::cout << "Pour " << poids << " kilos, vous devez utiliser:" << std::endl;
    if (poids <= 5)
    {
        std::cout << "la machine économe (maxi 5kg)" << std::endl;
    }
    else if (poids > 5 && poids <= 10)
    {
        std::cout << "la machine 2, maxi 10kg." << std::endl;
    }
    else 
    {
        int utilisation { 0 };
        while (poids > 5)
        {
            poids -=10;
            ++utilisation;
        }
        std::cout <<"Il faut utiliser " << utilisation << " machine de 10kg." << std::endl;
        if (poids > 0)
        {
            std::cout << "Les " << poids << " kg restant dans la  machine de 5kg." << std::endl;
        }
    }
    return 0;
}