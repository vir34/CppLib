#ifndef FREXP_H
#define FREXP_H

#include <cmath>

class Frexp
{
    public:
        Frexp();
        virtual ~Frexp();

    float * wykonaj(float x) {
        int y = 0;
        float wynik = frexp(x, &y);
        float * tablica = new float[2];
        tablica[0] = wynik;
        tablica[1] = y;
        return tablica;
    }

    protected:

    private:
};

#endif // FREXP_H
