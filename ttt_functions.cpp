#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

vector<string> start_game() {
    string player_one;
    string player_two;

    cout << "===============\n";
    cout << "O TIC TAC TOE X\n";
    cout << "===============\n";

    cout << "Welcome to Tic Tac Toe!\n\n";
    cout << "Please enter the name of Player 1: ";
    cin >> player_one;

    cout << "Please enter the name of Player 2: ";
    cin >> player_two;

    return {player_one, player_two};
}

void display_board(vector<string> board, string player_one, string player_two, int player_one_score, int player_two_score) {
    // draw board
    cout << "|===========|\n";
    cout << "| " << board[0] << " | " << board[1] << " | "<< board[2] << " |\n";
    cout << "|===========|\n";
    cout << "| " << board[3] << " | " << board[4] << " | "<< board[5] << " |\n";
    cout << "|===========|\n";
    cout << "| " << board[6] << " | " << board[7] << " | "<< board[8] << " |\n";
    cout << "|===========|\n\n";

    // Player Names and scores
    cout << player_one << ": " << player_one_score << "    vs    " << player_two_score << " :" << player_two << "\n";
}

string choose_first_mover(string player_one, string player_two) {
    int choice;
    string player_choice;
    cout << "Please pick a player to go first.\n";
    cout << "1. " << player_one << "\n";
    cout << "2. " << player_two << "\n";
    cout << "3. Random\n";
    cin >> choice;

    if (choice == 3) {
        srand(time(NULL));
        choice = rand() % 2 + 1;
    }

    if (choice == 1) {
        player_choice = player_one;
    } else if (choice == 2) {
        player_choice = player_two;
    } else {
        cout << "Error: Invalid choice entry. Terminating program.\n";
        return "Error";
    }

    return player_choice;
}

string make_move(string player) {
    cout << "";
    return "test";
}