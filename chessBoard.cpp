#include "chessBoard.h"

// Public
void chessBoard::putPiece(chessPiece piece, int x, int y) {
    this->board[x][y].setPiece(piece);
}

void chessBoard::takePiece(int x, int y) {
    // Get the piece
    chessPiece piece = this->board[x][y].getPiece();

    // Take it
    piece.setTaken(true);
}

void chessBoard::takePiece(string id) {
    // Get the piece
    chessPiece piece = findPieceFromId(id);
}


// Private
chessPiece chessBoard::findPieceFromId(string id) {
    // i = current rank
    for (int i = 0; i < sizeof(this->board); i++) {
        // j = current file
        for (int j = 0; j < sizeof(this->board[i]); j++) {
            if (this->board[i][j].getPiece().getId() == id) {
                return this->board[i][j].getPiece();
            }
        }
    }
}