#include "Shatrashanova_country.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "Shatrashanova_city.h"
using namespace std;

void Shatrashanova_country::add_new_city() {
	Shatrashanova_city *city = new Shatrashanova_city;
	cin >> *city;
	country.push_back(city);
}
ostream& operator<< (ostream& out, const Shatrashanova_country& country) {
	out << "Cities in the country" << endl;
	for (auto& city : country.country) {
		out << *city;
	}
	return out;
}
void Shatrashanova_country::delete_cities() {
	for (auto& city : country) {
		delete city;
	}
	country.clear();
}
ifstream& operator>> (ifstream& inf, Shatrashanova_country& country) {
	if (!inf) {
		cout << "Unable to open the file" << endl;
		return inf;
	}
	country.delete_cities();
	int number = 0;
	inf >> number;
	for (int i=0; i < number; i++) {
		Shatrashanova_city* city = new Shatrashanova_city;
		inf >> *city;
		country.country.push_back(city);
	}
	return inf;
}
ofstream& operator<< (ofstream& of, const Shatrashanova_country& country) {
	if (!of) {
		cout << "Unable to open the file" << endl;
		return of;
	}
	of << country.country.size() << endl;
	for (auto& city : country.country) {
		of << *city;
	}
	return of;
}
