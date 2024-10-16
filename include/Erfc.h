#ifndef ERFC_H
#define ERFC_H

#include <cmath>

class Erfc
{
    public:
        Erfc();
        virtual ~Erfc();

    float wykonaj(float x) {
        float wynik = erfc(x);
        return wynik;
    }

    protected:

    private:
};

#endif // ERFC_H
