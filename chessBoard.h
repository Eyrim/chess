#pragma once
#include <string>
#include <unordered_map>
#include "chessSquare.h"
#include "chessPiece.h"

using namespace std;

class chessBoard {
    public:
        void putPiece(chessPiece piece, int x, int y);
        void takePiece(int x, int y);
        void takePiece(string id);

    private:
        chessPiece findPieceFromId(string id);

        chessSquare board[8][8];
};