#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer choice: ";
    showChoice(computer);

    chooseWinner(player,computer);

    return 0;
}

char getUserChoice(){
    char player;
    cout << "Rock Paper Scissors Game" << endl;
    cout << "************************" << endl;
    do {
    cout << "'R' for Rock" << endl;
    cout << "'P' for Paper" << endl;
    cout << "'S' for Scissors" << endl;
    cout << "Enter choice (R,P,S): " << endl;
    cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){
    srand(time(nullptr));
    int num = rand() % 3 + 1;
    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){
        switch (choice) {
            case 'r': cout << "Rock" << endl;
                break;
            case 'p': cout << "Paper" << endl;
                break;
            case 's': cout << "Scissors" << endl;
                break;
    }
}
void chooseWinner(char player, char computer){
    switch (player) {
        case 'r': if (computer == 'r'){
                cout << "Its a tie!" << endl;
            } else if (computer == 'p') {
                cout << "You lost!" << endl;
            } else {
                cout << "You won!" << endl;
            }
            break;
        case 'p': if (computer == 'r'){
                cout << "You won!" << endl;
            } else if (computer == 'p') {
                cout << "Its a tie!" << endl;
            } else {
                cout << "You lost!" << endl;
            }
            break;
        case 's': if (computer == 'r'){
                cout << "You lost!" << endl;
            } else if (computer == 'p') {
                cout << "You won!" << endl;
            } else {
                cout << "Its a tie!" << endl;
            }
            break;
    }
}