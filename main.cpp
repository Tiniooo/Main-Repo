#include <iostream>
#include <string>
#include <vector>

bool exitTool;
bool exitInv;
std::vector<std::string> inv = {"Apple", "Sword"};
std::string item, iS;
int num = 0;
int i, ii;


void negative_algo(int num) {
    std::cout << "Enter A Number: ";
    std::cin >> num;
    if (i > 0) {
        num = num - (num * 2) ;
    }
    std::cout << num << "\n";
}

void convert_min_to_s(int num){
    std::cout << "Enter The Number Of Minute: ";
    std::cin >> num;
    if (num <= 0) {
        std::cout << "0(Not Possible)\n";
    } else {
        num = num * 60;
        std::cout << num <<"s\n";
    }
}

void inventory(std::vector<std::string> inv, std::string num, bool exitInv, std::string item){
    while(!exitInv) {
        for(int i=0; i < inv.size(); i++){
            std::cout << inv[i] << "\n";
        }
        std::cout << "[1] Add\n";
        std::cout << "[2] Remove\n";
        std::cout << "[3] Exit\n3";
        std::cin >> num;
        if (num == "1") {
            std::cout << "Type Something: ";
            std::cin >> item;
            inv.push_back(item);
        } else if (num == "2") {
        } else if (num == "3") {
            exitInv = true;
        }
    }
}

void integer(int i) {
    if(i == 1) {
        negative_algo(num);
    } else if (i == 2) {
        convert_min_to_s(num);
    } else if (i == 3) {
        inventory(inv, iS, exitInv, item);
    } else if (i == 999) {
        exitTool = true;
    }
}

int main() {
    while(!exitTool) {
        system("clear");
        std::cout << "[1]Negative Algoritm\n";
        std::cout << "[2]Convert Minute To Second\n";
        std::cout << "[3]Inventory System\n";
        std::cout << "[999]Exit\n";
        std::cout << "\nEnter: ";
        std::cin >> i;
        system("clear");
        integer(i);
    }
    std::cout << "Exiting...\n";
    return 0;
}
