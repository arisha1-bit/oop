#include "Shatrashanova_capital.h"
#include <iostream>
#include "utils.h"
#include "pch.h"
#include "framework.h"
using namespace std;
IMPLEMENT_SERIAL(Shatrashanova_capital, Shatrashanova_city, VERSIONABLE_SCHEMA | 0)
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

void Shatrashanova_capital::Serialize(CArchive& ar) {
	Shatrashanova_city::Serialize(ar);
	if (ar.IsStoring()){
		CString president_;
		CString sight_;
		president_ = CString(president.c_str());
		sight_ = CString(sight.c_str());
		ar << president_ << sight_;
	}
	else {
		CString president_;
		CString sight_;
		ar >> president_ >> sight_;
		president = CT2CA(president_);
		sight = CT2CA(sight_);
	}
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