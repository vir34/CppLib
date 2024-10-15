#ifndef STRTODOUBLE_H
#define STRTODOUBLE_H

#include <sstream>

class StrToDouble
{
    public:
        StrToDouble();
        virtual ~StrToDouble();

    double wykonaj(std::string znaki) {
        double liczba = 0.0d;
        std::istringstream(znaki) >> liczba;
        return liczba;
    }

    protected:

    private:
};

#endif // STRTODOUBLE_H
