#ifndef FLOOR_H
#define FLOOR_H

#include <cmath>

class Floor
{
    public:
        Floor();
        virtual ~Floor();

    float wykonaj(float x) {
        float wynik = floor(x);
        return wynik;
    }

    protected:

    private:
};

#endif // FLOOR_H
