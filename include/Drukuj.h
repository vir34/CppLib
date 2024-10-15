#ifndef DRUKUJ_H
#define DRUKUJ_H

#include <DrukujZnaki.h>
#include <DrukujZnak.h>
#include <DrukujFloat.h>
#include <DrukujDouble.h>
#include <DrukujInt.h>

class Drukuj
{
    public:
        Drukuj();
        virtual ~Drukuj();

    Drukuj wykonaj(std::string znaki = "", std::string koniec = ""){
        DrukujZnaki drukuj;
        drukuj.wykonaj(znaki, koniec);
        Drukuj referencja;
        return referencja;
    }

    Drukuj wykonaj(float znaki = 0.0f, std::string koniec = ""){
        DrukujFloat drukuj;
        drukuj.wykonaj(znaki, koniec);
        Drukuj referencja;
        return referencja;
    }

    Drukuj wykonaj(double znaki = 0.0d, std::string koniec = ""){
        DrukujDouble drukuj;
        drukuj.wykonaj(znaki, koniec);
        Drukuj referencja;
        return referencja;
    }

    Drukuj wykonaj(int znaki = 0, std::string koniec = ""){
        DrukujInt drukuj;
        drukuj.wykonaj(znaki, koniec);
        Drukuj referencja;
        return referencja;
    }

    Drukuj wykonaj(char znak = 'a', std::string koniec = ""){
        DrukujZnak drukuj;
        drukuj.wykonaj(znak, koniec);
        Drukuj referencja;
        return referencja;
    }

    protected:

    private:
};

#endif // DRUKUJ_H
