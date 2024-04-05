#include "labyrinthe.hpp"
#include "joueur.hpp"
#include <iostream>

int main() {
    Joueur joueur(1, 1); // Position initiale du joueur
    Labyrinthe labyrinthe("res/carte.txt", joueur);

    labyrinthe.afficher();
    
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
    }
    return 0;
}
