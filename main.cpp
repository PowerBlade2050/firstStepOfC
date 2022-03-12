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
    /*
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
    */
    // PGCD
    /*
    int a { 0 };
    int b { 0 };
    std::cout << "Le premier nombre:" << std::endl;
    std::cin >> a;
    std::cout << "Le deuxieme nombre:" << std::endl;
    std::cin >> b;
    int r { a % b };
    while (r != 0)
    {
        b = a;
        b = r;
        r = a % b;
    }
    std::cout << "Le PGCD est égale à " << b << "." << std::endl;
    */

    // 1 à n
    /*
    int n { 0 };
    std::cout << "Quel nombre ?" << std::endl;
    std::cin >> n;
    */
    // Version sans boucle:
    /*
    int b { ((n * (n + 1)) / 2) };
    std::cout << "La somme à N +1 vaut: " << b << "." << std::endl;
    */
    // Version avec boucle:
    /*
    int total { 0 }; // Initialisation compteur à 0
    int compteur { 1 }; // Incrementation + 1
    while (compteur <= n) // Tant que le compteur est < ou = à n
    {
        total += compteur;  // On ajoute le compteur au total à chaque passage dans la boucle
        ++compteur; // On incremente le compteur de 1 à chaque passage dans la boucle
    }
    std::cout << "La somme N+1 vaut: " << total << "." << std::endl;
    */
    // Boucle for:
    for (int a { 0 }; a < 10; ++a)
    {
        std::cout << "De 0 à 9 :" << a << std::endl;
    } 
    return 0;
}