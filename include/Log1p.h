#ifndef LOG1P_H
#define LOG1P_H

#include <cmath>

class Log1p
{
    public:
        Log1p();
        virtual ~Log1p();

    float wykonaj(float x) {
        float wynik = log1p(x);
        return wynik;
    }

    protected:

    private:
};

#endif // LOG1P_H
