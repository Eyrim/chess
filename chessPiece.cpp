#include "chessPiece.h"

chessPiece::chessPiece(string id, string name, bool isWhite) {
    this->id = id;
    this->name = name;
    this->isWhite = isWhite;
}

bool chessPiece::getTaken() {
    return this->isTaken;
}

void chessPiece::setTaken(bool taken) {
    this->isTaken = taken;
}

string chessPiece::getId() {
    return this->id;
}