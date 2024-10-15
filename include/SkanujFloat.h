#ifndef SKANUJFLOAT_H
#define SKANUJFLOAT_H

#include <iostream>

class SkanujFloat
{
    public:
        SkanujFloat();
        virtual ~SkanujFloat();

    float wykonaj() {
        float znaki = 0.0f;
        std::cin >> znaki;
        return znaki;
    }

    protected:

    private:
};

#endif // SKANUJFLOAT_H
