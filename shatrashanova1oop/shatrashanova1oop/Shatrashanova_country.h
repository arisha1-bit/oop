#pragma once
#include <fstream>
#include <iostream>
#include <vector>
#include "Shatrashanova_city.h"
using namespace std;
class Shatrashanova_country
{
public: 
	
	void add_new_city();
	void delete_cities();

	friend ostream& operator<< (ostream& out, const Shatrashanova_country& country);

	friend ifstream& operator>> (ifstream& inf, Shatrashanova_country& country);
	friend ofstream& operator<< (ofstream& of, const Shatrashanova_country& country);

private:
	vector<Shatrashanova_city*> country;

};

