#ifndef INTTOSTR_H
#define INTTOSTR_H

#include <sstream>

class IntToStr
{
    public:
        IntToStr();
        virtual ~IntToStr();

    std::string wykonaj(int liczba) {
        std::string znaki = "";
        znaki = std::to_string(liczba);
        return znaki;
    }

    protected:

    private:
};

#endif // INTTOSTR_H
