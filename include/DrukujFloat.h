#ifndef DRUKUJFLOAT_H
#define DRUKUJFLOAT_H

#include <iostream>

class DrukujFloat
{
    public:
        DrukujFloat();
        virtual ~DrukujFloat();

    void wykonaj(float znaki = 0.0f, std::string koniec = "") {
        std::cout << znaki << koniec;
    }

    protected:

    private:
};

#endif // DRUKUJFLOAT_H
