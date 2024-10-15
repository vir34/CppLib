#ifndef PODZIEL_H
#define PODZIEL_H


class Podziel
{
    public:
        Podziel();
        virtual ~Podziel();

    float wykonaj(float a, float b) {
        return a / b;
    }

    protected:

    private:
};

#endif // PODZIEL_H
