#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
     cout << "Problem 14" << endl;
     double CGPA;
     double lecture=14;
     int absence, projects;
     cin >> CGPA ;
     cin >> absence;
     cin >> projects;
     double attendance=((lecture-absence)/lecture)*100;
     cout << attendance << endl;
     if (CGPA>=3.5 && attendance>=90 && projects>=3)
          cout << "Eligible" << endl;
     else if (CGPA>=3.7 && attendance>=80 && projects>=2)
          cout << "Eligible" << endl;
     else if (CGPA>=4.0 && attendance>=70 && projects>=1)
          cout << "Eligible" << endl;
     else
          cout << "Not Eligible" <<endl;









     return 0;
}