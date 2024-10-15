#ifndef STRTOFLOAT_H
#define STRTOFLOAT_H

#include <sstream>

class StrToFloat
{
    public:
        StrToFloat();
        virtual ~StrToFloat();

    float wykonaj(std::string znaki) {
        float liczba = 0.0f;
        std::istringstream(znaki) >> liczba;
        return liczba;
    }

    protected:

    private:
};

#endif // STRTOFLOAT_H
