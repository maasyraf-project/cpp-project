#include <iostream> //define header file library
using namespace std; //define standard library used

// create a new class
class newClass
{
    public:
        int age = 5;
        string name = "Hahi";
};

// main function
int main() {
    cout << "Hello all! \n";
    cout << "This is my first CPP file \n";
    cout << "Lets see! \n\n";

    cout << "Lets define some variable: \n";
    int num = 17;
    float flo = 17.17;
    char letter = 'd';
    bool truefalse = true;
    string text = "Hello";

    cout << "Lets call our new class: \n";
    newClass nc;
    cout << "The name of the new class is: " <<nc.name<<endl;
    return 0; // return no other output besides the string declared on the previous line
}