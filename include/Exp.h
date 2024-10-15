#ifndef EXP_H
#define EXP_H

#include <cmath>

class Exp
{
    public:
        Exp();
        virtual ~Exp();

    float wykonaj(float x) {
        return exp(x);
    }

    protected:

    private:
};

#endif // EXP_H
