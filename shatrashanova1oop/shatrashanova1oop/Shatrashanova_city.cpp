#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
#include <float.h>
#include "utils.h"
using namespace std;

void Shatrashanova_city::show(ostream& out) {
	out << "Название: " << name << endl;
	out << "Площадь: " << square << endl;
	out << "Возраст: " << age << endl;
	out << "Население: " << population << endl << endl;
}

void Shatrashanova_city::creat(istream& in) {
	cout << "Введите название города " << endl;
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline(in, name);
	cout << "Введите площадь города в км^2" << endl;
	square = correctnumber(0.0, DBL_MAX);
	cout << "Введите возраст города" << endl;
	age = correctnumber(0, INT_MAX);
	cout << "Введите население города в тысячах" << endl;
	population = correctnumber(0.0, DBL_MAX);
}
//ofstream& operator<< (ofstream& of, const Shatrashanova_city& city) {
//	of << city.name << endl << city.square << endl << city.age << endl << city.population << endl;
//	return of;
//}
//ifstream& operator>> (ifstream& inf, Shatrashanova_city& city) {
//	getline(inf, city.name);
//	getline(inf, city.name);
//	inf >> city.square;
//	inf >> city.age;
//	inf >> city.population;
//	return inf;
//}
