#ifndef RINT_H
#define RINT_H

#include <cmath>

class Rint
{
    public:
        Rint();
        virtual ~Rint();

    float wykonaj(float x) {
        float wynik = rint(x);
        return wynik;
    }

    protected:

    private:
};

#endif // RINT_H
