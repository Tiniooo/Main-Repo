#include <iostream>
#include <string>
#include <vector>

bool exitTool;
bool exitInv;
std::vector<std::string> inv = {"Apple", "Sword"};
std::string item, iInv, pause;
int num = 0;
int i, ii;

void test() {
    system("pause");
}


void negative_algo(int num) {
    std::cout << "---Convert Positive To Negative---\n\n";
    std::cout << "Enter A Number: ";
    std::cin >> num;
    if (num > 0) {
        num = num - (num * 2) ;
    }
    std::cout << num << "\n";
    std::cout << "Type Anything and enter to continue...\n"; 
    std::cin >> pause;
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
    std::cin >> pause;
}

void inventory(std::vector<std::string> inv, std::string num, bool exitInv, std::string item){
    while(!exitInv) {
        system("clear");
        std::cout << "---INVENTORY---\n";
        for(int i=0; i < inv.size(); i++){
            std::cout << inv[i] << "\n";
        }
        std::cout << "---------------\n";
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
        inventory(inv, iInv, exitInv, item);
    } else if (i == 4) {
        test();
    } else if (i == 999) {
        exitTool = true;
    }
}

int main() {
    while(!exitTool) {
        system("clear");
        std::cout << "[1]Negative Algorithm\n";
        std::cout << "[2]Minute To Second Algorithm\n";
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
