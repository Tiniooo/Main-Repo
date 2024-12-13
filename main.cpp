#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "game.hpp"

// Variables globales
bool exitTool = false;
bool exitInv = false;
std::vector<std::string> inv = { "Apple", "Sword" };
std::string item, pauseCode, key, i;
int num = 0;

// Fonctions utilitaires
void negative_algo() {
    std::cout << "---Convert Positive To Negative---\n\n";
    std::cout << "Enter A Number: ";
    std::cin >> num;
    if (num > 0) {
        num = -num;
    }
    std::cout << num << "\n";
    std::cout << "Press Enter to continue...\n";
    std::cin.ignore();
    std::cin.get();
}

// Fonction Effacement
void clear() {
    system("cls");
}

void convert_min_to_s() {
    clear();
    std::cout << "---Convert Minute To Second---\n\n";
    std::cout << "Enter The Number Of Minutes: ";
    std::cin >> num;
    if (num <= 0) {
        std::cout << "0 (Not Possible)\n";
    }
    else {
        num *= 60;
        std::cout << num << " seconds\n";
    }
    std::cout << "Press Enter to continue...\n";
    std::cin.ignore();
    std::cin.get();
}

void inventory() {
    while (!exitInv) {
        clear();
        int objIndex = 1;
        std::cout << "---INVENTORY---\n";
        for (const auto& item : inv) {
            std::cout << "[" << objIndex << "] " << item << "\n";
            objIndex++;
        }
        std::cout << "---------------\n\n";

        std::cout << "\n----OPTIONS-----\n";
        std::cout << "[1] Add\n";
        std::cout << "[2] Remove\n";
        std::cout << "[3] Exit\n";
        std::cout << "Enter: ";
        std::cin >> num;

        if (num == 1) {
            std::cout << "Enter Item to Add: ";
            std::cin >> item;
            inv.push_back(item);
        }
        else if (num == 2) {
            std::cout << "Enter Item to Remove: ";
            std::cin >> key;
            auto it = std::find(inv.begin(), inv.end(), key);
            if (it != inv.end()) {
                inv.erase(it);
                std::cout << "Item Removed.\n";
            }
            else {
                std::cout << "Item Not Found.\n";
            }
        }
        else if (num == 3) {
            exitInv = true;
        }
    }
}

// Gestion des choix
void integer(const std::string& choice) {
    if (choice == "1") {
        negative_algo();
    }
    else if (choice == "2") {
        convert_min_to_s();
    }
    else if (choice == "3") {
        inventory();
    }
    else if (choice == "4") {
        main_game();
        std::cout << "\nPress Enter to continue...\n";
        std::cin.ignore();
        std::cin.get();
    }
    else if (choice == "999") {
        exitTool = true;
    }
}

// Fonction principale
int main() {
    while (!exitTool) {
        clear();
        std::cout << "xX--------------MENU---------------Xx\n";
        std::cout << "[1]      Negative Algorithm      [1]\n";
        std::cout << "[2]  Minute To Second Algorithm  [2]\n";
        std::cout << "[3]       Inventory System       [3]\n";
        std::cout << "[4]       Display Game Map       [4]\n";
        std::cout << "[999]           Exit           [999]\n";           
        std::cout << "Enter: ";
        std::cin >> i;

        integer(i);
    }
    std::cout << "Exiting...\n";
    return 0;
}
