#ifndef SKANUJZNAK_H
#define SKANUJZNAK_H

#include <iostream>

class SkanujZnak
{
    public:
        SkanujZnak();
        virtual ~SkanujZnak();

    char wykonaj() {
        char znak = 0;
        std::cin >> znak;
        return znak;
    }

    protected:

    private:
};

#endif // SKANUJZNAK_H
