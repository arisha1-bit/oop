#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Shatrashanova_city
{public:
	/*Shatrashanova_city();
	~Shatrashanova_city();*/

	friend ostream& operator<< (ostream& out, const Shatrashanova_city& city);
	friend istream& operator>> (istream& in, Shatrashanova_city& city);

	friend ifstream& operator>> (ifstream& inf, Shatrashanova_city& city);
	friend ofstream& operator<< (ofstream& of, const Shatrashanova_city& city);
private:
	string name;
	double square=0.0;
	int age=0;
	double population=0.0;
};

