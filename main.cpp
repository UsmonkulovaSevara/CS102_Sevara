#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
     cout << "Problem 15" << endl;
     double speed1, speed2, speed3, monthlyPayment, loyaltyYears, outstandingBalance;
     cin >> speed1 >> speed2 >> speed3 >> monthlyPayment >> loyaltyYears >> outstandingBalance;
     double avgSpeed=(speed1 + speed2 + speed3)/3;
     bool upgrade = false;
     if (avgSpeed >= 100 && (monthlyPayment >= 50 || loyaltyYears >=3))
          upgrade = false;
     else if (outstandingBalance > 0)
          upgrade = true;
     if (upgrade)
          cout << "Granted";
     else
          cout << "Not Granted";











     return 0;
}