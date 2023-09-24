#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
#include <float.h>
#include "utils.h"
using namespace std;

ostream& operator<< (ostream& out, const Shatrashanova_city& city) {
	out << "Название: " << city.name << endl;
	out << "Площадь: " << city.square << endl;
	out << "Возраст: " << city.age << endl;
	out << "Население: " << city.population << endl << endl;
	return out;
}
istream& operator>> (istream& in, Shatrashanova_city& city) {
	cout << "Введите название города " << endl;
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline(in, city.name);
	cout << "Введите площадь города в км^2" << endl;
	city.square = correctnumber(0.0, DBL_MAX);
	cout << "Введите возраст города" << endl;
	city.age = correctnumber(0, INT_MAX);
	cout << "Введите население города в тысячах" << endl;
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
