#include <iostream>
#include <cmath>

using namespace std;

// create mathematical function
float c(float a, float b) {
    float computeC;

    computeC = sqrt(pow(a,2) + pow(b,2));
    cout << "Answer is: " << computeC << endl;
    return computeC;
}

int main() {
    float newFloat = 7.4f;
    float a = 3;
    float b = 4;
    int pow1 = 2;
    int pow2 = 3;
    float pow3 = 0.5;

    cout << "Power operation with cmath: " << endl;
    cout << "The power " << pow1 << " of " << newFloat << " is " << pow(newFloat, pow1) << endl;
    cout << "The power " << pow2 << " of " << newFloat << " is " << pow(newFloat, pow2) << endl;
    cout << "The power " << pow3 << " of " << newFloat << " is " << pow(newFloat, pow3) << endl << "\n";

    cout << "Trigonometric operation with cmath:  " << endl;
    cout << "sin(" << newFloat << ") = " << sin(newFloat) << endl;
    cout << "cos(" << newFloat << ") = " << cos(newFloat) << endl;
    cout << "tan(" << newFloat << ") = " << tan(newFloat) << endl <<'\n';

    cout << "Test a function: " << endl;
    c(a, b);

    return 0;
}