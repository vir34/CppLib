#ifndef NEXTTOWARD_H
#define NEXTTOWARD_H

#include <cmath>

class Nexttoward
{
    public:
        Nexttoward();
        virtual ~Nexttoward();

    float wykonaj(float x, float y) {
        float wynik = nexttoward(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // NEXTTOWARD_H
