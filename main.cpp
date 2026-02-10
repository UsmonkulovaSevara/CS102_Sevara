#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     int intNumber = 15;
     cout << intNumber << "\t" << sizeof(intNumber) << endl;

     float floatNumber = 3.14;
     cout << floatNumber << "\t" << sizeof(floatNumber) << endl;

     double doubleNumber = 45.1234;
     cout << doubleNumber <<"\t" <<sizeof(doubleNumber) << endl;

     bool boolean = true;
     cout << boolean << "\t" <<sizeof(boolean) << endl;

     char charName = 65;
     cout << charName << "\t" << sizeof(charName) << endl;

     return 0;
}