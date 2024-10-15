#ifndef SKANUJDOUBLE_H
#define SKANUJDOUBLE_H

#include <iostream>

class SkanujDouble
{
    public:
        SkanujDouble();
        virtual ~SkanujDouble();

    double wykonaj() {
        double znaki = 0.0f;
        std::cin >> znaki;
        return znaki;
    }

    protected:

    private:
};

#endif // SKANUJDOUBLE_H
