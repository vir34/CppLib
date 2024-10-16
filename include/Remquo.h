#ifndef REMQUO_H
#define REMQUO_H

#include <cmath>

class Remquo
{
    public:
        Remquo();
        virtual ~Remquo();

    float * wykonaj(float x, float y) {
        int z = 0;
        float wynik = remquo(x, y, &z);
        float * tablica = new float[2];
        tablica[0] = wynik;
        tablica[1] = z;
        return tablica;
    }

    protected:

    private:
};

#endif // REMQUO_H
