#ifndef DOUBLETOSTR_H
#define DOUBLETOSTR_H

#include <sstream>

class DoubleToStr
{
    public:
        DoubleToStr();
        virtual ~DoubleToStr();

    std::string wykonaj(double liczba) {
        std::string znaki = "";
        znaki = std::to_string(liczba);
        return znaki;
    }

    protected:

    private:
};

#endif // DOUBLETOSTR_H
