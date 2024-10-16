#ifndef POW_H
#define POW_H

#include <cmath>

class Pow
{
    public:
        Pow();
        virtual ~Pow();

    float wykonaj(float x, float y) {
        float wynik = pow(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // POW_H
