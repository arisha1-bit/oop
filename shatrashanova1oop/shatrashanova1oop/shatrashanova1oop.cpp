﻿#include <iostream>
#include "utils.h"
#include "Shatrashanova_city.h"
#include "Shatrashanova_country.h"
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Shatrashanova_country Country;
    int option = -1;
    while (option) {
        cout << "Выберите вариант: 1. Добавить новый город   2. Показать всю страну   3. Считать информацию с файла   4. Сохранить нформацию в файл   5. Очистить страну    0. Выйти" << endl;
        option = correctnumber(0, 5);
        switch (option) {
        case 0:
            return 0;
        case 1:
        {
            Country.add_new_city();
            break;
        }
        case 2:
        {
            cout << Country;
            break;
        }
        case 3:
        {
            string file;
            cout << "Введите название файла без .txt" << endl;
            getline(cin, file);
            getline(cin, file);
            ifstream f;
            f.open(file + ".txt");
            f >> Country;
            f.close();
            break; }
        case 4:
        {
            string file;
            cout << "Введите название файла без .txt" << endl;
            getline(cin, file);
            getline(cin, file);
            ofstream f;
            f.open(file + ".txt");
            f << Country;
            f.close();
            break;
        }
        case 5:
            Country.delete_cities();
            cout << "Страна очищена" << endl;
            break;
        }
    }
    return 0;
}

