#ifndef ZADANIE_H
#define ZADANIE_H

#include<iostream>

class Zadanie
{
    public:
        Zadanie();
        virtual ~Zadanie();

    virtual void wykonaj() = 0;


    protected:

    private:
};

#endif // ZADANIE_H
