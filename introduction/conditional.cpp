#include <iostream>
#include <cmath>
#include <ostream>

using namespace std;

int test(int number) {
    string eval;

    cout << "Checking if the input is odd or even" <<endl;
    if (number%2 == 0) {
        eval = "even";
    } else {
        eval = "odd";
    }

    cout << "The " << number << " is " << eval << endl;
    return 0;
};

int main() {
    int a = 2;
    int b = 3;
    switch (a) {
        case 1:
            cout << "The value of integer is: " << a+1 <<endl;
            break;
        case 2:
            cout << "The value of integer is: " << a+2 <<endl;
            break;
        default:
            cout << "The value of integer is: " << a <<endl;
            break;
    }

    int c = (a>=b) ? a:b;
    cout << "The biggest value on the variable existed is : " << c <<endl <<'\n';

    test(a);
    test(b);
}