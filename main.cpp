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

     cout << " \"I am standing\" on the edge of some crazy cliff.\n"
             "What I have to do, I have to cach everybody\\ \n"
             "if they start to go over the cliff-I mean\\ \n"
             "\\if they're running and they don't look \n"
             "where they're going I have to come out \n"
             "from somewhere and \t \t catch them. " <<endl;

    int a=189;
    char b='B';
    float division=a/3;
    cout << division << "\t";
    float decimalvalue=b;
    cout << decimalvalue << "\t";
    float addition=(a+b)/5;
    cout << addition << "\t";
    char character=b+(a/10-1);
    cout << character << endl;

    int value1;
    int value2;
    int sum;
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
    sum = value1 + value2;
    cout << "Sum is:" << sum << endl;

    int x;
    int y;
    cout << "Enter value 1: ";
    cin >> x;
    cout << "Enter value 2: ";
    cin >> y;
    int t=(3*((x*x)+3))/((y/4)+3);
    cout << "t=" << t << endl;

    int d;
    cout << "Enter diameter value: ";
    cin >> d;
    float p=3.14;
    int r=d/2;
    float area = 4*p*r*r;
    cout << "Area of the sphere:" << area << endl;

    float v1;
    float v0;
    float time;
    cout << "Enter starting velocity (in meters per second): ";
    cin >> v0;
    cout << "Enter ending velocity (in meters per second): ";
    cin >> v1;
    cout << "Enter time span (in seconds) : ";
    cin >> time;
    float av=(v1-v0)/time;
    cout << "Average velocity: " << av << endl;

    float distance;
    float fuel;
    float price;
    cout << "Enter distance in miles: ";
    cin >> distance;
    cout << "Enter fuel in miles per gallon: ";
    cin >> fuel;
    cout << "Enter price per gallon: ";
    cin >> price;
    float cost=(distance/fuel)*price;
    cout << "The cost of driving is: $" << cost << endl;



     return 0;
}