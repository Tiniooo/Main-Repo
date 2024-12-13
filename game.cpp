#include "game.hpp"
#include <iostream>
#include <conio.h> // Pour la capture des touches (Windows uniquement)

#define PLAYER "@"
#define WALL "#"
#define GRASS_SMALL "'" 
// Définitions des variables

int height = 20;
int width = 15;

// Position du joueur
int player_x = 1;
int player_y = 1;

// Définition de la fonction principale du jeu
void main_game() {
    while (true) {
        // Effacer l'écran
        clear();

        // Afficher la carte
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                    std::cout << WALL; // Bordures
                }
                else if (i == player_y && j == player_x) {
                    std::cout << PLAYER; // Joueur
                }
                else {
                    std::cout << GRASS_SMALL; // Espace intérieur
                }
            }
            std::cout << "\n";
        }

        // Détecter l'entrée de l'utilisateur
        if (_kbhit()) { // Si une touche est appuyée
            char key = _getch(); // Récupérer la touche appuyée
            // Mettre à jour la position du joueur
            if (key == 'z' && player_y > 1) player_y--; // Haut
            if (key == 's' && player_y < height - 2) player_y++; // Bas
            if (key == 'q' && player_x > 1) player_x--; // Gauche
            if (key == 'd' && player_x < width - 2) player_x++; // Droite
            if (key == 'a') break; // Quitter le jeu
        }
    }
}
