#include "Shatrashanova_capital.h"
#include <iostream>
#include "utils.h"

void Shatrashanova_capital::creat(istream& in) {
	cout << "������� �������� ������ " << endl;
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline(in, name);
	cout << "������� ������� ������ � ��^2" << endl;
	square = correctnumber(0.0, DBL_MAX);
	cout << "������� ������� ������" << endl;
	age = correctnumber(0, INT_MAX);
	cout << "������� ��������� ������ � �������" << endl;
	population = correctnumber(0.0, DBL_MAX);
	cout << "������� ��� ���������� ������" << endl;
	getline(in, president);
	getline(in, president);
	cout << "������� ������� ��������������������� �������" << endl;
	getline(in, sight);
}

void Shatrashanova_capital::show(ostream& out) {
	out << endl << endl;
	out << "��������: " << name << endl;
	out << "�������: " << square << endl;
	out << "�������: " << age << endl;
	out << "���������: " << population << endl;
	out << "��������� ������: " << president << endl;
	out << "������� ��������������������� �������: " << sight << endl;

}