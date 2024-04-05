#pragma once

enum class Direction { HAUT, BAS, DROITE, GAUCHE };

class Joueur {
public:
    int x, y; // Position du joueur dans le labyrinthe
    Joueur(int posX, int posY) : x(posX), y(posY) {}
    void deplacer(Direction dir);
};
