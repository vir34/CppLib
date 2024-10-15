#ifndef DRUKUJZNAK_H
#define DRUKUJZNAK_H

#include <iostream>

class DrukujZnak
{
    public:
        DrukujZnak();
        virtual ~DrukujZnak();

    void wykonaj(char znak = 'a', std::string koniec = "") {
        std::cout << znak << koniec;
    }

    protected:

    private:
};

#endif // DRUKUJZNAK_H
