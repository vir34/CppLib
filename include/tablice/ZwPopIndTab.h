#ifndef ZWPOPINDTAB_H
#define ZWPOPINDTAB_H

#include <iostream>
#include <vector>

class ZwPopIndTab
{
    public:
        ZwPopIndTab();
        virtual ~ZwPopIndTab();

    int wykonaj(std::vector <std::string> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) in = ostInd;
        else if (ind < 0) in = 0;
        else in = ind;
        return in;
    }

    int wykonaj(std::vector <int> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) in = ostInd;
        else if (ind < 0) in = 0;
        else in = ind;
        return in;
    }

    int wykonaj(std::vector <float> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) in = ostInd;
        else if (ind < 0) in = 0;
        else in = ind;
        return in;
    }

    int wykonaj(std::vector <double> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) in = ostInd;
        else if (ind < 0) in = 0;
        else in = ind;
        return in;
    }

    int wykonaj(std::vector <char> tab, int ind) {
        int rozm = tab.size();
        int ostInd = rozm - 1;
        int in = 0;
        if (ind > ostInd) in = ostInd;
        else if (ind < 0) in = 0;
        else in = ind;
        return in;
    }

    protected:

    private:
};

#endif // ZWPOPINDTAB_H
