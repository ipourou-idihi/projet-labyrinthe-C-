#pragma once

#include "joueur.hpp"
#include <vector>
#include <string>

class Labyrinthe {
    std::vector<std::string> carte;
    Joueur joueur;
    int sortieX, sortieY; // Ajout des attributs pour la position de la sortie

public:
    Labyrinthe(const std::string& fichierCarte, Joueur j);
    void chargerCarte(const std::string& fichierCarte);
    bool deplacementValide(int newX, int newY) const;
    void afficher() const;
    void deplacerJoueur(Direction dir);
    bool estSurLaSortie() const; // Nouvelle méthode pour vérifier si le joueur est sur la sortie
};

