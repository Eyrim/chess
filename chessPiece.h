#pragma once
#include <string>

using namespace std;

class chessPiece {
    public:
        void setTaken(bool taken);
        bool getTaken();

        string getId();

    private:
        string name;
        string id;
        bool isTaken;
};