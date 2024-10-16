#ifndef EXPM1_H
#define EXPM1_H

#include <cmath>

class Expm1
{
    public:
        Expm1();
        virtual ~Expm1();

    float wykonaj(float x) {
        return expm1(x);
    }

    protected:

    private:
};

#endif // EXPM1_H
