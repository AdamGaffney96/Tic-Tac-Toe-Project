#include <iostream>
#include <vector>
#include "ttt.hpp"

int main() {
    vector<string> player_names = start_game();
    int player_one_score = 0;
    int player_two_score = 0;
    string temp;
    vector<string> board = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    display_board(board, player_names[0], player_names[1], player_one_score, player_two_score);

    cin >> temp;

    return 0;
}