#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if((towar = 0)) { return 0;}
    for(int i = 0; i<towar; i++)
    {
        Stocznia stocznia{};
        Statek* s = stocznia();
        i = i + s->transportuj();
        delete s;
    }
    return 0;
}