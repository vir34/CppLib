#ifndef FMOD_H
#define FMOD_H

#include <cmath>

class Fmod
{
    public:
        Fmod();
        virtual ~Fmod();

    float wykonaj(float x, float y) {
        float wynik = fmod(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // FMOD_H
