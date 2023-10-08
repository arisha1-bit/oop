#include "Shatrashanova_city.h"
#include <iostream>
#include <fstream>
#include <float.h>
#include "utils.h"
#include "pch.h"
#include "framework.h"
using namespace std;
IMPLEMENT_SERIAL(Shatrashanova_city, CObject,0)
void Shatrashanova_city::show(ostream& out) {
	out << endl;
	out << "��������: " << name << endl;
	out << "�������: " << square << endl;
	out << "�������: " << age << endl;
	out << "���������: " << population << endl << endl;
}
void Shatrashanova_city::Serialize(CArchive& ar) {
	if (ar.IsStoring()) {
		CString name1;
		name1 = CString(name.c_str());
		ar << name1 << square << age << population;
	}
	else {
		CString name_;
		ar >> name_ >> square >> age >> population;
		name = CT2CA(name_);
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