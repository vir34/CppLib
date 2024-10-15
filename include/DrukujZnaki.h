#ifndef DRUKUJZNAKI_H
#define DRUKUJZNAKI_H

#include "Zadanie.h"
#include <iostream>

class DrukujZnaki
{
    public:
        DrukujZnaki();
        virtual ~DrukujZnaki();

    void wykonaj(std::string znaki = "", std::string koniec = "") {
        std::cout << znaki << koniec;
    }

    protected:

    private:
};

#endif // DRUKUJZNAKI_H
