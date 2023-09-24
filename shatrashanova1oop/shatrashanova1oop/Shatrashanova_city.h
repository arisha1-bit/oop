#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Shatrashanova_city
{public:
	virtual void creat(istream& in);
	virtual void show(ostream& out);
protected:
	string name;
	double square=0.0;
	int age=0;
	double population=0.0;
};

