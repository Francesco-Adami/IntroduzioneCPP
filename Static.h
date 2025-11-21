#pragma once
#include "StruttureDiControllo.h"
#include <string>
#include <vector>

class Static
{
public:
    // dichiarazione di una variabile statica
    static int count;
    
    static const int pi = 314; // solo i tipi interi e enum possono essere inizializzati cosi

    Static()
    {
        count++;
        std::cout << "creato istanza di static, ora ce ne sono: " << count << "\n";
    }

    ~Static()
    {
        count--;
    }

    static int GetCount() {return count;}

    static int SommaStatic(int a, int b)
    {
        return a + b;
    }
    
};
