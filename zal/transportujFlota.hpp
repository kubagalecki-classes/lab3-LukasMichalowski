#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar = 0) { return 0;}
    int towar2 = 0;
    do
    {
        Stocznia stocznia{};
        Statek* s = stocznia();
        towar2 += s->transportuj();
        delete s;
    }
    while(towar2>=towar);



    return 0;
}