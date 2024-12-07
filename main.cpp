// Update all 2(problem with game.cpp)

// Include File

#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <unistd.h>

#include "game.cpp"

// VARIABLE
bool exitTool;
bool exitInv;
std::vector<std::string> inv = {"Apple", "Sword"};
<<<<<<< HEAD
std::string item;
std::string input;
int i, ii, num;

=======
std::string item, iInv, pauseCode, key, i;
int num = 0;
int  numTest, ii, objIndex;
>>>>>>> caa563637c39425354b33f2225fe02bbd5542458

void negative_algo(int num) {
    std::cout << "---Convert Positive To Negative---\n\n";
    std::cout << "Enter A Number: ";
    std::cin >> num;
    if (num > 0) {
        num = num - (num * 2) ;
    }
    std::cout << num << "\n";
    std::cout << "Type Anything and enter to continue...\n"; 
    std::cin >> pauseCode;
}



void convert_min_to_s(int num){
    std::cout << "---Convert Minute To Second---\n\n";
    std::cout << "Enter The Number Of Minute: ";
    std::cin >> num;
    if (num <= 0) {
        std::cout << "0(Not Possible)\n";
    } else {
        num = num * 60;
        std::cout << num <<"s\n";
    }
    std::cout << "Type Anything and enter to continue...\n"; 
    std::cin >> pauseCode;
}

<<<<<<< HEAD
void inventory(std::vector<std::string> inv, std::string input, bool exitInv, std::string item){
    while(!exitInv){
        for(int i=0; i < inv.size(); i++){
            std::cout << inv[i] << "\n";
        }
        std::cout << "[1] Add\n";
        std::cout << "[2] Remove\n";
        std::cout << "[3] Exit\n";
        std::cout << "\nEnter: ";
        std::cin >> input;
        system("cls");
        if (input == "add" || input == "Add" || input == "1") {
            std::cout << "\nType Something: ";
            std::cin >> item;
            inv.push_back(item);
            system("cls");
        } else if (input == "remove" || input == "Remove" || input == "2") {
          
        } else if (input == "exit" || input == "Exit" || input == "3") {
            exitInv = true;
        }
    }

=======
void inventory(std::vector<std::string> inv, std::string num, bool exitInv, std::string item, int objIndex, std::string key){
    while(!exitInv) {
        system("clear");
        objIndex = 1;
        std::cout << "---INVENTORY---\n";
        for(int i=0; i < inv.size(); i++){
            std::cout << "[" << objIndex << "]" << inv[i] << "\n";
            objIndex++;
        }

        std::cout << "---------------\n\n";
        std::cout << "----OPTION-----\n";
        std::cout << "[1] Add\n";
        std::cout << "[2] Remove\n";
        std::cout << "[3] Exit\n";
        std::cout << "\nEnter: ";
        std::cin >> num;

        if (num == "1") {
            std::cout << "Type Something: ";
            std::cin >> item;
            inv.push_back(item);
        } else if (num == "2") {
            std::cout << "\nType The Object That You Want To Remove: ";
            std::cin >> key;
            inv.erase(find(inv.begin(), inv.end(), key));
        } else if (num == "3") {
            exitInv = true;
        }
    }
>>>>>>> caa563637c39425354b33f2225fe02bbd5542458
}

void integer(std::string i) {
    if(i == "1") {
        negative_algo(num);
    } else if (i == "2") {
        convert_min_to_s(num);
<<<<<<< HEAD
    } else if (i == 3) {
        inventory(inv, input, exitInv, item);
    } else if (i == 999) {
=======
    } else if (i == "3") {
        inventory(inv, iInv, exitInv, item, objIndex, key);
    } else if (i == "4") {
        main_game();
    } else if (i == "999") {
>>>>>>> caa563637c39425354b33f2225fe02bbd5542458
        exitTool = true;
    }
}

int main() {
    while(!exitTool) {
<<<<<<< HEAD
        std::cout << "[1]Negative Algoritm\n";
        std::cout << "[2]Convert Minute To Second\n";
        std::cout << "[3]Inventory System \n";
=======
        system("clear");
        std::cout << "[1]Negative Algorithm\n";
        std::cout << "[2]Minute To Second Algorithm\n";
        std::cout << "[3]Inventory System\n";
>>>>>>> caa563637c39425354b33f2225fe02bbd5542458
        std::cout << "[999]Exit\n";
        std::cout << "\nEnter: ";
        std::cin >> i;
        system("cls");
        integer(i);
    }
    std::cout << "Exiting...\n";
    return 0;
}
