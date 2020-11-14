#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if((towar = 0)) { return 0;}
    int zaglowiec=0;
    for(int i = 0; i<towar; i++)
    {
        Stocznia stocznia{};
        Statek* s = stocznia();
        i = i + s->transportuj();
        if(Zaglowiec* x= dynamic_cast<Zaglowiec*>(s)){
            zaglowiec+=1;
        }
        delete s;
    }
    return zaglowiec;
}