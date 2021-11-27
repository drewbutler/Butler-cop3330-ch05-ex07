/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Drew Butler
 */

#include <iostream>
#include <cmath>
using namespace std;

float getPositive(int a, int b, int c) {

    float x, result, discriminant;

    discriminant = (b*b - 4 * a * c);
    if(discriminant < 0 ) {
        cout << "Cannot compute quadratic equation.\n";
        return 0;
    } else {
        x = (-b + sqrt(discriminant)) / (2*a);
        cout << "The real roots are:\n";
        cout << "x1 = " << x << "\n";

    }

    return x;

}

float getNegative(int a, int b, int c) {
    
    float x, result, discriminant;

    discriminant = (b*b - 4 * a * c);
    if(discriminant < 0 ) {
        cout << "Cannot compute quadratic equation.\n";
        return 0;
    } else {
        x = (-b - sqrt(discriminant)) / (2*a);
        cout << "x2 = " << x;
    }

    return x;
}

int main(void) {
    float a, b, c;
    float positive, negative;

    cout << "Enter a number > 0 for variable a:\n";
    cin >> a;
    cout << "Enter a number for variable b:\n";
    cin >> b;
    cout << "Enter a numebr for variable c:\n";
    cin >> c;

    getPositive(a, b, c);
    getNegative(a, b, c);

    return 0;

}