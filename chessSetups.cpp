#include<iostream>
#include "chessSetups.h"

#include "chessBoard.h"

using namespace std;

void chessSetups::standardSetup(chessBoard& board) {
    // Setup white pawns      id   name    isWhite x y
    board.putPiece(chessPiece("0", "pawn", true), 0, 1);
    board.putPiece(chessPiece("1", "pawn", true), 1, 1);
    board.putPiece(chessPiece("2", "pawn", true), 2, 1);
    board.putPiece(chessPiece("3", "pawn", true), 3, 1);
    board.putPiece(chessPiece("4", "pawn", true), 4, 1);
    board.putPiece(chessPiece("5", "pawn", true), 5, 1);
    board.putPiece(chessPiece("6", "pawn", true), 6, 1);
    board.putPiece(chessPiece("7", "pawn", true), 7, 1);

    // Setup black pawns      id   name    isWhite  x  y
    board.putPiece(chessPiece("8", "pawn", false), 0, 6);
    board.putPiece(chessPiece("9", "pawn", false), 1, 6);
    board.putPiece(chessPiece("10", "pawn", false), 2, 6);
    board.putPiece(chessPiece("11", "pawn", false), 3, 6);
    board.putPiece(chessPiece("12", "pawn", false), 4, 6);
    board.putPiece(chessPiece("13", "pawn", false), 5, 6);
    board.putPiece(chessPiece("14", "pawn", false), 6, 6);
    board.putPiece(chessPiece("15", "pawn", false), 7, 6);

    // Setup white pieces     id    name    isWhite x y
    board.putPiece(chessPiece("16", "rook", true), 0, 0);
    board.putPiece(chessPiece("17", "knight", true), 1, 0);
    board.putPiece(chessPiece("18", "bishop", true), 2, 0);
    board.putPiece(chessPiece("19", "queen", true), 3, 0);
    board.putPiece(chessPiece("20", "king", true), 4, 0);
    board.putPiece(chessPiece("21", "bishop", true), 5, 0);
    board.putPiece(chessPiece("22", "knight", true), 6, 0);
    board.putPiece(chessPiece("23", "rook", true), 7, 0);

    // Setup black pieces      id   name    isWhite  x  y
    board.putPiece(chessPiece("24", "rook", false), 0, 7);
    board.putPiece(chessPiece("25", "knight", false), 1, 7);
    board.putPiece(chessPiece("26", "bishop", false), 2, 7);
    board.putPiece(chessPiece("27", "queen", false), 3, 7);
    board.putPiece(chessPiece("28", "king", false), 4, 7);
    board.putPiece(chessPiece("29", "bishop", false), 5, 7);
    board.putPiece(chessPiece("31", "knight", false), 6, 7);
    board.putPiece(chessPiece("32", "rook", false), 7, 7);
}