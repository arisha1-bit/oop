#include "Shatrashanova_country.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "Shatrashanova_city.h"
#include <memory>
using namespace std;

void Shatrashanova_country::add_new_city() {
	shared_ptr<Shatrashanova_city> city =  make_shared<Shatrashanova_city>();
	city->creat(cin);
	country.push_back(city);
}
void Shatrashanova_country::add_capital() {
	shared_ptr<Shatrashanova_capital> capital = make_shared<Shatrashanova_capital>();
	capital->creat(cin);
	country.push_back(capital);
}
ostream& operator<< (ostream& out, const Shatrashanova_country& country) {
	out << "Города в стране: " << endl;
	for (auto& city : country.country) {
		city->show(out);
	}
	return out;
}
void Shatrashanova_country::delete_cities() {
	country.clear();
}
//ifstream& operator>> (ifstream& inf, Shatrashanova_country& country) {
//	if (!inf) {
//		cout << "Невозможно открыть файл" << endl;
//		return inf;
//	}
//	country.delete_cities();
//	int number = 0;
//	inf >> number;
//	for (int i=0; i < number; i++) {
//		Shatrashanova_city* city = new Shatrashanova_city;
//		inf >> *city;
//		country.country.push_back(city);
//	}
//	return inf;
//}
//ofstream& operator<< (ofstream& of, const Shatrashanova_country& country) {
//	if (!of) {
//		cout << "Невозможно открыть файл" << endl;
//		return of;
//	}
//	of << country.country.size() << endl;
//	for (auto& city : country.country) {
//		of << *city;
//	}
//	return of;
//}
