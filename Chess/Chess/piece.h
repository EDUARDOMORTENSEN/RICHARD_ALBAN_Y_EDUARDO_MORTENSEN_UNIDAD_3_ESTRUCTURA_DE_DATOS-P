#pragma once
class Piece {
private:
    int row;
    int column;
    char name;
public:
    Piece() = default;
    int getColumn();
    void setColumn(int c);
    int getRow();
    void setRow(int r);
    char getName();
    void createPiece(char name, int r, int c);
    void moveQueen(int numberStep, int direction);
    void moveHorse(int direction);
    void moveBishop(int numberStep, int direction);
    void moveTower(int numberStep, int direction);
    
};

