#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <unistd.h>


// #define PLAYER "@"
// #define WALL "#"
// #define MONSTER "M"   
// #define GRASS_LONG "&"
// #define MAP_HEIGHT 20
// #define MAP_WIDTH 20

std::string wall = "#";
int height = 20;
int width = 20;

void main_game(){ 
    for(int i; i <= width; i++) {
        std::cout << wall;
        for (int t; t <= height; t++) {
            std::cout << "\n";
        }
    }
}