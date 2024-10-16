#ifndef ABS_H
#define ABS_H

#include <cmath>

class Abs
{
    public:
        Abs();
        virtual ~Abs();

    float wykonaj(float x) {
        float wynik = abs(x);
        return wynik;
    }

    protected:

    private:
};

#endif // ABS_H
