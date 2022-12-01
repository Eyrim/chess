#pragma once
#include <string>

using namespace std;

class chessPiece {
    public:
        chessPiece(string id, string name, bool isWhite);

        bool getTaken();
        void setTaken(bool taken);

        string getId();

    private:
        string name;
        string id;
        bool isWhite;
        bool isTaken = false;
};