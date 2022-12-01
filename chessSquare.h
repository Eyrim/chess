#pragma once
#include <string>
#include "chessPiece.h"

using namespace std;

class chessSquare {
    public:
        void setPiece(chessPiece piece);
        void removePiece();
        void setX(int x);
        void setY(int y);
        chessPiece getPiece();

    private:
        chessPiece piece;
        int x;
        int y;
};