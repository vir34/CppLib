#ifndef LOGB_H
#define LOGB_H

#include <cmath>

class Logb
{
    public:
        Logb();
        virtual ~Logb();

    float wykonaj(float x) {
        float wynik = logb(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LOGB_H
