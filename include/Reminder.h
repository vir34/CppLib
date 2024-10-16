#ifndef REMINDER_H
#define REMINDER_H

#include <cmath>

class Reminder
{
    public:
        Reminder();
        virtual ~Reminder();

    float wykonaj(float x, float y) {
        float wynik = remainder(x, y);
        return wynik;
    }

    protected:

    private:
};

#endif // REMINDER_H
