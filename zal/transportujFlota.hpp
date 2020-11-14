#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if((towar = 0)) { return 0;}
    unsigned int zaglowiec=0;
    Stocznia stocznia{};
    int t=0;
   while(t<towar)
    {
        Statek* s = stocznia();
        t = t + s->transportuj();
        Zaglowiec* x= dynamic_cast<Zaglowiec*>(s);
        if(x != nullptr ){
            zaglowiec+=1;
        }
        delete s;
    }
    return zaglowiec;
}