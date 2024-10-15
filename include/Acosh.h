#ifndef ACOSH_H
#define ACOSH_H

#include <cmath>

class Acosh
{
    public:
        Acosh();
        virtual ~Acosh();

    float wykonaj(float x) {
        return acosh(x);
    }

    protected:

    private:
};

#endif // ACOSH_H
