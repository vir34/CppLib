#ifndef RESZTA_H
#define RESZTA_H

#include <cmath>

class Reszta
{
    public:
        Reszta();
        virtual ~Reszta();

    float wykonaj(float a, float b) {
        return fmod(a, b);
    }

    protected:

    private:
};

#endif // RESZTA_H
