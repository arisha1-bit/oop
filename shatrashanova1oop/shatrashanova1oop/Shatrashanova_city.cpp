#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
#include <float.h>
#include "utils.h"
using namespace std;

ostream& operator<< (ostream& out, const Shatrashanova_city& city) {
	out << "Name: " << city.name;
	out << "Square: " << city.square;
	out << "Age: " << city.age;
	out << "Population: " << city.population;
	return out;
}
istream& operator>> (istream& in, Shatrashanova_city& city) {
	cout << "Input city`s name" << endl;
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline(in, city.name);
	cout << "Input city`s square (in km^2)" << endl;
	city.square = correctnumber(0.0, DBL_MAX);
	cout << "Input city`s age" << endl;
	city.age = correctnumber(0, INT_MAX);
	cout << "Input city`s population (in thousands)" << endl;
	city.population = correctnumber(0.0, DBL_MAX);
	return in;
}
ofstream& operator<< (ofstream& of, const Shatrashanova_city& city) {
	of << city.name << endl << city.square << endl << city.age << endl << city.population << endl;
	return of;
}
ifstream& operator>> (ifstream& inf, Shatrashanova_city& city) {
	getline(inf, city.name);
	getline(inf, city.name);
	inf >> city.square;
	inf >> city.age;
	inf >> city.population;
	return inf;
}
