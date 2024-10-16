#ifndef LLROUND_H
#define LLROUND_H

#include <cmath>

class Llround
{
    public:
        Llround();
        virtual ~Llround();

    float wykonaj(float x) {
        float wynik = llround(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LLROUND_H
