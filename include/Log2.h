#ifndef LOG2_H
#define LOG2_H

#include <cmath>

class Log2
{
    public:
        Log2();
        virtual ~Log2();

    float wykonaj(float x) {
        float wynik = log2(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LOG2_H
