#pragma once

#include "include/Stocznia.hpp"
#include "include/Statki.hpp"


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
        if(dynamic_cast<Zaglowiec*>(s)){
            zaglowiec++;
        }
        delete s;
    }
    return zaglowiec;
}