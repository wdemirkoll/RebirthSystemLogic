#include <iostream>

// Player's power multiplier
int Power = 1;

// Current experience points
int XP = 0;

// Total rebirth count
int Rebirth = 0;

// Menu Selection - Choice
int Choose;

// Handles rebirth logic
// Player must have at least 100 XP to rebirth
void RebirthLogic(){
    if (XP >= 100){
        XP = 0;
        Power++;
        Rebirth++;
    }
    else {
        std::cout << "100 XP is required!" << std::endl;
    }
}

// Displays current player statistics
void Statistic(){
    std::cout << "====================" << std::endl;
    std::cout << "Rebirth: " << Rebirth << std::endl;
    std::cout << "Power: " << Power << "x" << std::endl;
    std::cout << "XP: " << XP << std::endl;
    std::cout << "====================" << std::endl;
}

// Prints the main menu options
void MainMenu(){
    std::cout << "[1] - Earn XP" << std::endl;
    std::cout << "[2] - Rebirth" << std::endl;
    std::cout << "[3] - Exit" << std::endl;
}

// Gets user input for menu selection
void ChooseFunction(){
    std::cout << "Choose: ";
    std::cin >> Choose;
}

int main(){
    while(true){
        Statistic(),
        MainMenu();
        ChooseFunction();

         switch(Choose){
         case 1:
            XP += 10; // Earn 10 XP
            break;

         case 2:
            RebirthLogic(); // Attempt rebirth
            break;

         case 3:
            return 0; // Exit

         default: // Invalid Selection
            std::cout << "Invalid Selection!" << std::endl;
            break;
         }
    }
}
