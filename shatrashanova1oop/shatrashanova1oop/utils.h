#pragma once
#include <iostream>
using namespace std;

template <typename T>
T correctnumber(T min, T max) {
    T x;
    while (((cin >> x).fail()) || (cin.peek() != '\n') || (x < min) || (x > max)) {
        cout << "Error!!! Input numeric value >= " << min << " and =< " << max << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    return x;
}
