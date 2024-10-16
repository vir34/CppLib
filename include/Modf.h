#ifndef MODF_H
#define MODF_H

#include <cmath>

class Modf
{
    public:
        Modf();
        virtual ~Modf();

    float * wykonaj(float x) {
        double y = 0;
        float wynik = modf(x, &y);
        float * wyniki = new float[2];
        wyniki[0] = wynik;
        wyniki[1] = y;
        return wyniki;
    }

    protected:

    private:
};

#endif // MODF_H
