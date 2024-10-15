#ifndef DRUKARKA_H
#define DRUKARKA_H

#include <iostream>

class Drukarka
{
    public:
        Drukarka();
        virtual ~Drukarka();

    void drukuj(std::string znaki = "", std::string zakonczenie = "\n") {
        std::cout << znaki << zakonczenie;
    }

    void drukuj(float znaki, std::string zakonczenie = "\n") {
        std::cout << znaki << std::endl;
    }

    protected:

    private:
};

#endif // DRUKARKA_H
