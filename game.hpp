#ifndef GAME_HPP
#define GAME_HPP

#include <string>

// Déclaration des variables globales (avec extern pour éviter les conflits)
extern std::string wall;
extern int height;
extern int width;

// Déclaration de la fonction
void main_game();
void clear(); 

#endif // GAME_HPP
