#include "chessBoard.h"

void chessSquare::setPiece(chessPiece piece) {
    this->piece = piece;
}

void chessSquare::removePiece() {
    this->piece;
}

void chessSquare::setX(int x) {
    this->x = x;
}

void chessSquare::setY(int y) {
    this->y = y;
}

chessPiece chessSquare::getPiece() {
    return this->piece;
}