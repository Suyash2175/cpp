#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board();
    void printBoard();
    bool placeQueen(int row, int col);
    bool solve();
private:
    char board[8][8];
    bool isSafe(int row, int col);
    bool solveHelper(int col); // Declaration of solveHelper() function
};

#endif // BOARD_H
