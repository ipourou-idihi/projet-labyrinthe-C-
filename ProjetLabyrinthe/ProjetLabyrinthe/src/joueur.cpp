#include "joueur.hpp"

void Joueur::deplacer(Direction dir) {
    switch (dir) {
        case Direction::HAUT: y--; break;
        case Direction::BAS: y++; break;
        case Direction::DROITE: x++; break;
        case Direction::GAUCHE: x--; break;
    }
}
