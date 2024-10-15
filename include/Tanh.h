#ifndef TANH_H
#define TANH_H

#include <cmath>

class Tanh
{
    public:
        Tanh();
        virtual ~Tanh();

    float wykonaj(float x) {
        return tanh(x);
    }

    protected:

    private:
};

#endif // TANH_H
