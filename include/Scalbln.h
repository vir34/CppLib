#ifndef SCALBLN_H
#define SCALBLN_H

#include <cmath>

class Scalbln
{
    public:
        Scalbln();
        virtual ~Scalbln();

    float wykonaj(float x, float y) {
        float wynik = scalbln(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // SCALBLN_H
