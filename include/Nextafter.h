#ifndef NEXTAFTER_H
#define NEXTAFTER_H

#include <cmath>

class Nextafter
{
    public:
        Nextafter();
        virtual ~Nextafter();

    float wykonaj(float x, float y) {
        float wynik = nextafter(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // NEXTAFTER_H
