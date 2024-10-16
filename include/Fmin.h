#ifndef FMIN_H
#define FMIN_H

#include <cmath>

class Fmin
{
    public:
        Fmin();
        virtual ~Fmin();

    float wykonaj(float x, float y) {
        float wynik = fmin(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // FMIN_H
