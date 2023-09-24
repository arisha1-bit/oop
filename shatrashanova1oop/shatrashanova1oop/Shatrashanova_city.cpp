#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
#include <float.h>
#include "utils.h"
#include "pch.h"
#include "framework.h"
using namespace std;
IMPLEMENT_SERIAL(Shatrashanova_city, CObject, VERSIONABLE_SCHEMA | 0)
void Shatrashanova_city::show(ostream& out) {
	out << "��������: " << name << endl;
	out << "�������: " << square << endl;
	out << "�������: " << age << endl;
	out << "���������: " << population << endl << endl;
}
void Shatrashanova_city::Serialize(CArchive& ar) {
	if (ar.IsStoring()) {
		ar << name.c_str() << square << age << population;
	}
	else {
		CString name;
		ar >> name >> square >> age >> population;
		this->name=(LPCSTR)name;
	}


}

void Shatrashanova_city::creat(istream& in) {
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
}