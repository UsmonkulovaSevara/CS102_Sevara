#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
     cout << "Problem 1" << endl;
     int i;
     for (i=1; i<=10 ; i++) {
          cout << i << "\t";
     }
     cout <<endl;

     cout << "Problem 2" << endl;
     int sumu=0;
     for ( int u=1; u<=10; u++) {
          cout << u << " ";
          sumu=sumu+u;
     }
     cout << endl;
     cout << "Sum = " << sumu << endl;

     cout << "Problem 3" << endl;
     int r;
     for (r=1; r<=100; r++) {
          if (r%5==0) {
               continue;
          }
          cout << r << " ";
     }
     cout << endl;

     cout << "Problem 4" << endl;
     int n;
     cin >> n;
     for (int e=0;e<=n;e++) {
          if (e%10!=0) {
               continue;
          }
          cout << e << ' ';
     }
     cout << endl;

     cout << "Problem 5" << endl;
     char ASCII;
     for (ASCII=65;ASCII<=90;ASCII++) {
          if (ASCII%5==0) {
               cout << "\n";
          }
          cout << ASCII << "\t";
     }
     cout << endl;

     cout << "Problem 6" << endl;
     int credits, total_credits=0, num;
     float grade, sum=0;
     cout << "Enter number of classes: ";
     cin >> num;
     cout << "Enter credits for class and your grade\n:";
     while (num!=0) {
          cin >> credits >> grade;
          total_credits+=credits;
          sum+=float(credits)*grade;
          num--;
     }
     cout << "Your total GPA is: " <<sum/float(total_credits) << endl;

     cout << "Problem 7" << endl;


     return 0;
}