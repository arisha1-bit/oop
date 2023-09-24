#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include "Shatrashanova_city.h"
#include "Shatrashanova_capital.h"
using namespace std;
class Shatrashanova_country
{
public: 
	
	void add_new_city();
	void delete_cities();
	void add_capital();
	friend ostream& operator<< (ostream& out, const Shatrashanova_country& country);


private:
	vector<Shatrashanova_city*> country;

};

