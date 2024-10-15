#ifndef SKANUJINT_H
#define SKANUJINT_H

#include <iostream>

class SkanujInt
{
    public:
        SkanujInt();
        virtual ~SkanujInt();

    int wykonaj() {
        int znaki = 0;
        std::cin >> znaki;
        return znaki;
    }

    protected:

    private:
};

#endif // SKANUJINT_H
