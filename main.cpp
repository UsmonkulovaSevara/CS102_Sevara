#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {

     cout << "Problem 2" << endl;
     double x1, x2, x3;
     cin >> x1 >> x2 >> x3;
     double mu=(x1 + x2 + x3)/3.0;
     double var = ((pow((x1-mu), 2) + (pow((x2-mu), 2)) + (pow((x3-mu), 2))))/3.0;
     cout << var << endl;

     cout << "Problem 3" << endl;
     double p;
     cin >> p;
     if (p<0)
          cout << "The number is negative" << endl;
     else if (p>0)
          cout << "The number is positive" << endl;
     if (p==0)
          cout << "The number is zero" << endl;

     cout << "Problem 4" << endl;
     int q;
     cin >> q;
     if (q % 2==0) {
          cout << "The number is even";
     } else {cout << "The number is odd" ; } cout << endl;

     cout << "Problem 5" << endl;
     double t,h;
     cin >> t >> h;
     if (t>h)
          cout << "Largest number is: " << t << endl;
     else if (h>t)
          cout << "Largest number is: " << h << endl;
     else if (t==h)
          cout << "The numbers are equal" << endl;

     cout << "Problem 6" << endl;
     double a,b,c;
     double largest;
     cin >> a >> b >> c;
     if (a>b)
          if (a>c)
               largest = a;
     else { largest = c;}
     else if (b>a)
          if (b>c)
               largest = b;
     cout << "Largest number is: " << largest << endl;

     cout << "Problem 7" << endl;
     double speed;
     cin >> speed;
     if (speed<20 && speed>0)
          cout << "Too slow";
     else if (speed>80)
          cout << "Too fast";
     else cout << "Just right";

     cout << "Problem 11" << endl;
     char light;






     return 0;
}