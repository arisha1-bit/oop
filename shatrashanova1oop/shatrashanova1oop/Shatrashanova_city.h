#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "pch.h"
#include "framework.h"
using namespace std;
class Shatrashanova_city: public CObject
{ 
public:
	DECLARE_SERIAL(Shatrashanova_city);
	Shatrashanova_city() {};
	virtual ~Shatrashanova_city() {};
	virtual void creat(istream& in);
	virtual void show(ostream& out);
	virtual void Serialize(CArchive& ar);
protected:
	string name;
	double square=0.0;
	int age=0;
	double population=0.0;
};

