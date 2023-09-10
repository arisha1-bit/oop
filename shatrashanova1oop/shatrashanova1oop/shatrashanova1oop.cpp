#include <iostream>
#include "utils.h"
#include "Shatrashanova_city.h"
#include "Shatrashanova_country.h"
#include <fstream>
#include <string>
using namespace std;

int main()
{
    Shatrashanova_country Country;
    int option = -1;
    while (option) {
        cout << "Choose option: 1. Add new city   2. Show the country   3. Read data from file   4. Save to file   5. Clear the country    0. Exit" << endl;
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
            cout << "Input name of file to read from without .txt" << endl;
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
            cout << "Input name of file to save to without .txt" << endl;
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
            cout << "Country is cleared" << endl;
            break;
        }
    }
    return 0;
}

