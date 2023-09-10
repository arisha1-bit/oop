#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
using namespace std;
ostream& operator<< (ostream& out, const Shatrashanova_city& city) {
	out << "Name" << city.name;
	out << "Square" << city.square;
	out << "Age" << city.age;
	out << "Population" << city.population;
	return out;
}
istream& operator>> (istream& in, const Shatrashanova_city& city) {
	in >> 
}