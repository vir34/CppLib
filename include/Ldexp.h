#ifndef LDEXP_H
#define LDEXP_H

#include <cmath>

class Ldexp
{
    public:
        Ldexp();
        virtual ~Ldexp();

    float wykonaj(float x, float y) {
        return ldexp(x, y);
    }

    protected:

    private:
};

#endif // LDEXP_H
