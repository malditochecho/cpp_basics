#include <iostream>
using namespace std;

int main()
{
    // int
    int age = 35;
    int year = 2022;
    // int age = 'thirty five'; // error. string cannot be assigned to int.
    // int age = 2147483648;    // error. maximum is 2147483647
    // int pi = 3.14;           // error. float cannot be assigned to int.

    // char
    char bestLetter = 's';
    char anotherGoodLetter = 'R';
    char yearsToStudy = '3';

    // bool
    bool isCitizen = false;
    bool isRoovaneeUnderage = true;
    bool roovaneeIsCool = true;

    // float/double
    float pi = 3.14;

    cout << age << endl;
    cout << year << endl;
    cout << bestLetter << endl;
    cout << anotherGoodLetter << endl;
    cout << yearsToStudy << endl;
    cout << isCitizen << endl;          // in the output, false is 0
    cout << isRoovaneeUnderage << endl; // in the output, true is 1
    cout << roovaneeIsCool << endl;     // in the output, true is 1
}