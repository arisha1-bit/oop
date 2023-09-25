#include <iostream>
#include "utils.h"
#include "Shatrashanova_city.h"
#include "Shatrashanova_country.h"
#include <fstream>
#include <string>
#include <Windows.h>
#include "pch.h"
#include "framework.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Shatrashanova_country Country;
    int option = -1;
    while (option) {
        cout << endl << endl;
        cout << "Выберите вариант: 1. Добавить новый город   2. Добавить столицу   3. Показать всю страну   4. Сохранить информацию в файл   5. Считать информацию с файла   6. Очистить страну    0. Выйти" << endl;
        option = correctnumber(0, 6);
        switch (option) {
        case 0:
            return 0;
        case 1:
        {
            Country.add_new_city();
            break;
        }
        case 3:
        {
            cout << Country;
            break;
        }
        case 4:
        {
            string file;
            cout << "Введите название файла без .dat" << endl;
            getline(cin, file);
            getline(cin, file);
            file += ".dat";
            CFile f(file.c_str(), CFile::modeCreate | CFile::modeWrite);
            CArchive ar(&f, CArchive::store);
            ar << Country.getvector().size();
            for (auto& i : Country.getvector()) {
                auto ptr = i.get();
                ar << ptr;
            }
            ar.Close();
            break; }
        case 5:
        {
            string file;
            cout << "Введите название файла без .dat" << endl;
            getline(cin, file);
            getline(cin, file);
            file += ".dat";
            CFile f(file.c_str(), CFile::modeRead);
            CArchive ar(&f, CArchive::load);
            int n;
            ar >> n;
            for (int i = 0; i < n; i++) {
                Shatrashanova_city* city;
                ar >> city;
                shared_ptr<Shatrashanova_city> NewCity(city);
                Country.getvector().push_back(NewCity);
            }
            ar.Close();
            break; }
        case 6:
        {

            Country.delete_cities();
            cout << "Страна очищена" << endl;
            break;
        }
        case 2: {
            Country.add_capital();
            break;
        }
        }
    }
    return 0;
}

