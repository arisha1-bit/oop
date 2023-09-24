#pragma once
#include "Shatrashanova_city.h"
#include <string>
#include <iostream>
class Shatrashanova_capital :
    public Shatrashanova_city
{
    public: 
        void creat(istream& in);
        void show(ostream& out);

    private:
        string president;
        string sight;

};

