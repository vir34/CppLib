#ifndef DRUKUJINT_H
#define DRUKUJINT_H

#include <iostream>

class DrukujInt
{
    public:
        DrukujInt();
        virtual ~DrukujInt();

    void wykonaj(int znaki = 0, std::string koniec = "") {
        std::cout << znaki << koniec;
    }

    protected:

    private:
};

#endif // DRUKUJINT_H
