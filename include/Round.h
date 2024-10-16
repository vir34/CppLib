#ifndef ROUND_H
#define ROUND_H

#include <cmath>

class Round
{
    public:
        Round();
        virtual ~Round();

    float wykonaj(float x) {
        float wynik = round(x);
        return wynik;
    }

    protected:

    private:
};

#endif // ROUND_H
