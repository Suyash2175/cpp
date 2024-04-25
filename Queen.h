#ifndef QUEEN_H
#define QUEEN_H

class Queen {
public:
    Queen(int r, int c);
    int getRow();
    int getCol();
private:
    int row, col;
};

#endif // QUEEN_H
