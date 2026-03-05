#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//6.6
long long Factorial(int n=1) {
    long long result = 1;
    for (int i=1; i<= n; i++) {
        result= result*i;
    }
    return result;
}
int main1() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << Factorial(n) << endl;
    return 0;
}
//6.7
int gcd(int num1, int num2) {
    while (num2 !=0) {
        int r = num2;
        num2 = num1 % num2;
        num1 = r;
    }
    return num1;
}
int main2() {
    int num1, num2;
    cout << "Enter numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of these numbers is " << gcd(num1, num2) << endl;
    return 0;
}
//6.8
void Maximum(int a, int b, int c) {
    int max = a;

    if (b>max)
        max = b;
    if (c>max)
        max=c;
    cout << "Maximum: " << max;
}
void Minimum(int a, int b, int c) {
    int min=a;

    if (min>b)
        min=b;
    if (min>c)
        min=c;
    cout << "Minimum: " << min;
}
int main3() {
    int a,b,c;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;
    Maximum (a,b,c);
    cout << endl;
    Minimum (a,b,c);
    return 0;
}
//6.9
int sum (int a, int b) {
    return a+b;
}
int subtract (int a, int b) {
    return a-b;
}
int product (int a, int b) {
    return a*b;
}
int division (int a, int b) {
    return a/b;
}
int main4() {
    int a, b,c;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << sum(a,b) << endl << subtract(a,b) << endl << product(a,b) << endl << division << endl;
    return 0;
}
//6.10
int getTriangularNumber (int n) {
    return n*(n+1)/2;
}
int main5() {
    for (int i=1;i<=75;i++) {
        cout << getTriangularNumber (i) << " ";
        if ( i % 5 == 0)
        cout << endl;
    }
    return 0;
}
//6.11
void displayeven (int n) {
    while (n>0) {
        int d=n%10;
        n=n/10;
        if (d % 2==0)
            cout << d << endl;
    }
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    displayeven(n);
    return 0;
}