#include "Board.h"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = '-';
        }
    }
}

void Board::printBoard() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << board[i][j] << " ";
        }
        cout << std::endl;
    }
}

bool Board::placeQueen(int row, int col) {
    if (!isSafe(row, col)) {
        return false;
    }
    board[row][col] = 'Q';
    return true;
}

bool Board::isSafe(int row, int col) {
    for (int i = 0; i < 8; ++i) {
        if (board[row][i] == 'Q' || board[i][col] == 'Q') {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    for (int i = row, j = col; i < 8 && j >= 0; ++i, --j) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }
    return true;
}

bool Board::solve() {
    return solveHelper(0);
}

bool Board::solveHelper(int col) {
    if (col >= 8) {
        return true; // All queens are placed successfully
    }

    for (int row = 0; row < 8; ++row) {
        if (placeQueen(row, col)) {
            if (solveHelper(col + 1)) {
                return true;
            }
            // If placing queen in (row, col) doesn't lead to a solution, backtrack
            board[row][col] = '-';
        }
    }
    return false; // Unable to place a queen in this column
}

