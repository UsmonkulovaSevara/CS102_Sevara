#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    cout << "Problem 7" << endl;
    int num;
    bool isprime=true;
    cout << "Enter a number: ";
    cin >> num;
    if (num<=1) {
        isprime=false;
    } else {
        for (int i=2;i<num;i++) {
            if (num%i==0) {
                isprime=false;
                break;
            }
        }
    }
    if (isprime)
        cout << "Number is prime" << endl;
    else
        cout << "Number is not prime" << "\n";

    cout << "Problem 8" << endl;
    int n, temp, c = 0;
    int R = 0;

    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        temp = temp / 10;
        c++;
        }

    int k = c - 1;

    while (n > 0) {
        int d = n % 10;
        n = n / 10;
        R = R + d * pow(10, k);
        k--;
        }

    cout << R << endl;

    cout << "Problem 9" << endl;
    int number;
    int sum=0;
    cout << "Enter a nuber: ";
    cin>>n;

    for (int i=1; i<=n; i++) {
        int square = i*i;
        cout << i << "*" << i << "=" << square << endl;
        sum += square;
    }
    cout << "Sum=" << sum << endl;


    cout << "Problem 10" << endl;
    int max=0;
    int numb;
    do {
        cout << "Enter a number: ";
        cin >> numb;
        if (max<numb)
            max=numb;
    }
        while (numb!=0);
    cout << "Maximum number is: " << max << endl;

    cout << "Problem 11" << endl;
    int v;
    int positive=0;
    int negative=0;
    int total=0;
    float average;
    do {
        cout << "Enter values: ";
        cin >> v;
        if (v>0)
            positive=positive+1;
        else if (v<0)
            negative=negative+1;
        total=total+v;
    }
    while (v!=0);
    average=float(total/(positive+negative));
    cout << "The number of positives is " << positive << "\n" << "The number of negatives is " << negative << "\n"
    << "The total is " << total << "\n" << "The average is " << average << endl;

    return 0;
}