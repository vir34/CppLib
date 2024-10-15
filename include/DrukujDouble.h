#ifndef DRUKUJDOUBLE_H
#define DRUKUJDOUBLE_H

#include <iostream>

class DrukujDouble
{
    public:
        DrukujDouble();
        virtual ~DrukujDouble();

    void wykonaj(double znaki = 0.0d, std::string koniec = "") {
        std::cout << znaki << koniec;
    }

    protected:

    private:
};

#endif // DRUKUJDOUBLE_H
