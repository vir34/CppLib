#ifndef LLRINT_H
#define LLRINT_H

#include <cmath>

class Llrint
{
    public:
        Llrint();
        virtual ~Llrint();

    float wykonaj(float x) {
        float wynik = llrint(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LLRINT_H
