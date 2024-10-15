#ifndef STRTOINT_H
#define STRTOINT_H

#include <sstream>

class StrToInt
{
    public:
        StrToInt();
        virtual ~StrToInt();

    int wykonaj(std::string znaki) {
        int liczba = 0;
        std::istringstream(znaki) >> liczba;
        return liczba;
    }

    protected:

    private:
};

#endif // STRTOINT_H
