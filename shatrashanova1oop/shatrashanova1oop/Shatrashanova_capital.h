#pragma once
#include "Shatrashanova_city.h"
#include <string>
#include <iostream>
#include "pch.h"
#include "framework.h"
class Shatrashanova_capital :
    public Shatrashanova_city
{
    public: 
        DECLARE_SERIAL(Shatrashanova_capital)
        Shatrashanova_capital() {};
        virtual ~Shatrashanova_capital() {};
        void creat(istream& in);
        void show(ostream& out);
        void Serialize(CArchive& ar);

    private:
        string president;
        string sight;

};

