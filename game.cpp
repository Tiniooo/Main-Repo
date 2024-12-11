#include <iostream>
#include <string>
#include <vector>

std::string wall = "#";
const int height = 20;
const int width = 20;
int iii;
std::string move;

void main_game(){
    std::cout << wall;
    std::cin >> move;
    if(move == "x"){
        std::cout <<"\n\nEnter To Continue...";
        std::cin.ignore();
        std::cin.get();
    }
    
}