#include <iostream>
#include "chessBoard.cpp"
#include "chessSetups.cpp"
#include "chessSquare.cpp"
#include "chessPiece.cpp"

using namespace std;

chessBoard initBoard();

int main() {
    chessBoard board = initBoard();

    cout << "done";

    return 0;
}

chessBoard initBoard() {
    chessBoard board = chessBoard();
    chessSetups().standardSetup(board);

    return board;
}