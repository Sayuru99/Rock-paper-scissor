#include <iostream>
#include <stdlib.h>
int main() {

    srand(time(NULL));

    int user = 0;
    int round = 1;
    int actualRounds = 1;
    int userWins = 0;
    int computerWins = 0;

    std::string r1 = "Enter 1 for 1 rounds\n";
    std::string r2 = "Enter 2 for 5 rounds\n";
    std::string r3 = "Enter 3 for 11 rounds\n";
    std::string r4 = "Enter 4 for 21 rounds\n";
    std::string r5 = "Enter 5 for 100 rounds\n";
    std::string r6 = "Enter 6 for 1000 rounds\n";

    std::cout << r1;
    std::cout << r2;
    std::cout << r3;
    std::cout << r4;
    std::cout << r5;
    std::cout << r6;

    std::cout << "Choose: ";
    std::cin >> round;

    switch (round) {
    case 1:
        actualRounds = 1;
        break;
    case 2:
        actualRounds = 5;
        break;
    case 3:
        actualRounds = 11;
        break;
    case 4:
        actualRounds = 21;
        break;
    case 5:
        actualRounds = 100;
        break;
    case 6:
        actualRounds = 1000;
        break;
    default:
        std::cout << "Invalid Option\n";
    }

    for (int i = 0; i < actualRounds; i++) {
        int computer = rand() % 3 + 1;

        //Creating strings to avoid repetition
        std::string roc = "1) Rock\n";
        std::string pap = "2) Paper\n";
        std::string sci = "3) Scissors\n\n";


        std::cout << roc;
        std::cout << pap;
        std::cout << sci;

        std::cout << "Choose: ";
        std::cin >> user;


        std::cout << "\nYou  choose ";

        //Displaying user choice
        switch (user) {
        case 1:
            std::cout << roc;
            break;
        case 2:
            std::cout << pap;
            break;
        case 3:
            std::cout << sci;
            break;
        default:
            std::cout << "Invalid Option\n";
        }

        //Displaying computer choice
        std::cout << "Comp choose ";
        switch (computer) {
        case 1:
            std::cout << roc;
            break;
        case 2:
            std::cout << pap;
            break;
        case 3:
            std::cout << sci;
            break;
        default:
            std::cout << "Invalid Option\n";
        }


        //Win Lose Draw Logic
        if (user == computer) {
            std::cout << "Draw Game\n\n";
        }
        else if (user == 1 && computer == 3) {
            userWins++;
            std::cout << "You Win this round\n\n";
        }
        else if (user == 3 && computer == 2) {
            userWins++;
            std::cout << "You Win this round\n\n";
        }
        else if (user == 2 && computer == 1) {
            userWins++;
            std::cout << "You Win this round\n\n";
        }
        else {
            computerWins++;
            std::cout << "Computer Wins this round!\n";
        }
        
    }

    if (userWins > computerWins) {
        std::cout << "User win by ";
        std::cout << userWins;
        std::cout << ":";
        std::cout << computerWins;
    }

    if (computerWins > userWins) {
        std::cout << "Computer win by ";
        std::cout << computerWins;
        std::cout << ":";
        std::cout << userWins;
    }

    if (computerWins == userWins) {
        std::cout << "Game tied..!!!";
    }
}