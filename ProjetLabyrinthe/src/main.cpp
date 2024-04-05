#include "labyrinthe.hpp"
#include "joueur.hpp"
#include <iostream>

int main() {
    Joueur joueur(1, 1); // Position initiale du joueur
    Labyrinthe labyrinthe("res/carte.txt", joueur);

    labyrinthe.afficher();
    std::cout << "Utilisez les commandes suivantes pour vous deplacer :" << std::endl;
    std::cout << "'h' pour aller en haut." << std::endl;
    std::cout << "'b' pour aller en bas." << std::endl;
    std::cout << "'g' pour aller à gauche." << std::endl;
    std::cout << "'d' pour aller à droite." << std::endl;
    std::cout << std::endl;
    
    char commande;
    while (std::cin >> commande) {
        Direction dir;
        switch (commande) {
            case 'h': dir = Direction::HAUT; break;
            case 'b': dir = Direction::BAS; break;
            case 'd': dir = Direction::DROITE; break;
            case 'g': dir = Direction::GAUCHE; break;
            default: continue;
        }
        labyrinthe.deplacerJoueur(dir);
        labyrinthe.afficher();
        std::cout << "Votre choix : ";
    }
    return 0;
}
