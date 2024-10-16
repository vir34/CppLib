#ifndef HYPOT_H
#define HYPOT_H

#include <cmath>

class Hypot
{
    public:
        Hypot();
        virtual ~Hypot();

    float wykonaj(float x, float y) {
        float wynik = hypot(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // HYPOT_H
