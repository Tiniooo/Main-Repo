#include "game.hpp"
#include <iostream>

// Définitions des variables
std::string wall = "#";
int height = 40;
int width = 40;

// Définition de la fonction principale du jeu
void main_game() {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                std::cout << wall; // Bordures
            } else {
                std::cout << "'"; // Espace intérieur
            }
        }
        std::cout << "\n";
    }
}
