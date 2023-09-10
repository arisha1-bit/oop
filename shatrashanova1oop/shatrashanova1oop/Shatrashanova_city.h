#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Shatrashanova_city
{public:
	Shatrashanova_city();
	~Shatrashanova_city();

	friend ostream& operator<< (ostream& out, const Shatrashanova_city& city);
	friend istream& operator>> (istream& in, const Shatrashanova_city& city);

	friend ifstream& operator>> (fstream& inf, const Shatrashanova_city& city);
	friend ofstream& operator<< (fstream& of, const Shatrashanova_city& city);
private:
	string name;
	double square;
	int age;
	double population;
};

