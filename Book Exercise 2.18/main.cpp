//
//  main.cpp
//  Book Exercise 2.15
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Print a table of powers
//

#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    double a1 = 1;
    double a2 = 2;
    double a3 = 3;
    double a4 = 4;
    double a5 = 5;
    double a6 = 6;
    
    cout << "Table of Powers" << endl;
    cout << "a\tb\tpow(a, b)" << endl;
    
    cout << a1 << "\t" << a1 << "\t" << pow(a1, a1) << endl;
    cout << a2 << "\t" << a3 << "\t" << pow(a2, a3) << endl;
    cout << a3 << "\t" << a4 << "\t" << pow(a3, a4) << endl;
    cout << a4 << "\t" << a5 << "\t" << pow(a4, a5) << endl;
    cout << a5 << "\t" << a6 << "\t" << pow(a5, a6) << endl;
    
    return 0;
}