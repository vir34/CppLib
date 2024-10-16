#ifndef LOG10_H
#define LOG10_H

#include <cmath>

class Log10
{
    public:
        Log10();
        virtual ~Log10();

    float wykonaj(float x) {
        return log10(x);
    }

    protected:

    private:
};

#endif // LOG10_H
