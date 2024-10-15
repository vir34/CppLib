#ifndef SKANUJZNAKI_H
#define SKANUJZNAKI_H

#include <iostream>

class SkanujZnaki
{
    public:
        SkanujZnaki();
        virtual ~SkanujZnaki();

    std::string wykonaj() {
        std::string znaki = "";
        getline(std::cin, znaki, '\n');
        return znaki;
    }

    protected:

    private:
};

#endif // SKANUJZNAKI_H
