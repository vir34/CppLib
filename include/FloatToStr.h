#ifndef FLOATTOSTR_H
#define FLOATTOSTR_H

#include <sstream>

class FloatToStr
{
    public:
        FloatToStr();
        virtual ~FloatToStr();

    std::string wykonaj(float liczba) {
        std::string znaki = "";
        znaki = std::to_string(liczba);
        return znaki;
    }

    protected:

    private:
};

#endif // FLOATTOSTR_H
