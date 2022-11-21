#include "chessPiece.h"

bool chessPiece::getTaken() {
    return this->isTaken;
}

void chessPiece::setTaken(bool taken) {
    this->isTaken = taken;
}

string chessPiece::getId() {
    return this->id;
}