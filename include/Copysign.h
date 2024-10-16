#ifndef COPYSIGN_H
#define COPYSIGN_H

#include <cmath>

class Copysign
{
    public:
        Copysign();
        virtual ~Copysign();

    float wykonaj(float x, float y) {
        float wynik = copysign(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // COPYSIGN_H
