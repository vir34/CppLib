#ifndef SINH_H
#define SINH_H

#include <cmath>

class Sinh
{
    public:
        Sinh();
        virtual ~Sinh();

    float wykonaj(float x) {
        return sinh(x);
    }

    protected:

    private:
};

#endif // SINH_H
