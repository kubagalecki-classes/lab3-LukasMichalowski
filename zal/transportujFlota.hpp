#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar == 0)
    {
        return 0;
    }
    Stocznia stocznia{};
    unsigned int zaglowiec=0;
    unsigned int t=0;

    while(t<towar)
    {
        Statek* s = stocznia();
        t = t + s->transportuj();
        Zaglowiec* x= dynamic_cast<Zaglowiec*>(s);
        if(x != nullptr){
            zaglowiec++;
        }
        delete s;
    }
    return zaglowiec;
}