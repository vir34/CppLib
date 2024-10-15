#ifndef ATANH_H
#define ATANH_H

#include <cmath>

class Atanh
{
    public:
        Atanh();
        virtual ~Atanh();

    float wykonaj(float x) {
        return atanh(x);
    }

    protected:

    private:
};

#endif // ATANH_H
