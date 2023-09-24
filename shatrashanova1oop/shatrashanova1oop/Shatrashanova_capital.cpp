#include "Shatrashanova_capital.h"
#include <iostream>
#include "utils.h"

void Shatrashanova_capital::creat(istream& in) {
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
	cout << "Введите ФИО президента страны" << endl;
	getline(in, president);
	getline(in, president);
	cout << "Введите главную достопримечательность столицы" << endl;
	getline(in, sight);
}

void Shatrashanova_capital::show(ostream& out) {
	out << endl << endl;
	out << "Название: " << name << endl;
	out << "Площадь: " << square << endl;
	out << "Возраст: " << age << endl;
	out << "Население: " << population << endl;
	out << "Президент страны: " << president << endl;
	out << "Главная достопримечательность столицы: " << sight << endl;

}