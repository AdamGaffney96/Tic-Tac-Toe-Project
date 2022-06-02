#include <iostream>
#include <vector>
#include "ttt.hpp"

int main() {
    vector<string> player_names = start_game();
    int player_one_score = 0;
    int player_two_score = 0;
    string temp;
    vector<string> board = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    string first_player = choose_first_mover(player_names[0], player_names[1]);
    if (first_player == "Error") {
        return 0;
    }
    string second_player;

    if (first_player == player_names[0]) {
        second_player = player_names[1];
    } else {
        second_player = player_names[0];
    }

    display_board(board, first_player, second_player, player_one_score, player_two_score);

    cin >> temp;

    return 0;
}