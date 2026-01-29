#include <iostream>
#include <iomanip>
using namespace std;

int main() {

     cout << "He said: \"I like C++.\"\n" ;
     cout << "C:\\Users\\Student\\CS102\n";
     cout << "1.\t 2.\n";
     cout << "3.\t 4.\n";
     cout << "Problem No4\n";
     cout << "+---------+----------+----------+---------+\n";
     cout << "|   Time  |    Mon   |   Tue    |   Wed   |\n";
     cout << "+---------+----------+----------+---------+\n";
     cout << "|  09:00  |  CS102   |  Math    | Physics |\n";
     cout << "|  10:00  |  Math    |  ED311   | HASS100 |\n";
     cout << "|  11:00  |  Physics |  CS102   | Math    |\n";
     cout << "+---------+----------+----------+---------+\n";
     cout<<"Problem No5\n";
     cout<< "+-----------------------------------------+\n";
     cout<< "|             CS102 Tool Menu             |\n";
     cout<< "+-----------------------------------------+\n";
     cout<< "| 1) Print ID Card                        |\n";
     cout<< "| 2) Print ID Card                        |\n";
     cout<< "| 3) Print ID Card                        |\n";
     cout<< "| 4) Print ID Card                        |\n";
     cout<< "| 5) Print ID Card                        |\n";
     cout<< "+-----------------------------------------+\n";
     cout<< "| Author: Sevara    Lab#2                 |\n";
     cout<< "+-----------------------------------------+\n";

     cout<<"Problem No3.1\n";
     cout<< left << setw(12) << "Item";
     cout<< right << setw(10) << "Price" << endl;
     cout<< left << setw(12) << "Pen";
     cout<< right << setw(10) << fixed << setprecision(2) <<1.5  << endl;
     cout<< left  << setw(12) << "Notebook" ;
     cout<< right << setw(10) << fixed << setprecision(2) <<4.25 << endl;
     cout<<"Problem No3.2\n";
     cout<< "===================== Receipt ====================\n";
     cout<< left << setw(12) << "Item\t";
     cout<< right << setw(10) << "Qty\t" "Price\t" "Subtotal" << endl;
     cout<< "--------------------------------------------------\n";
     cout<< left << setw(12) << "Burger";
     cout<< right << setw(10) << fixed << setprecision(6) <<2 << endl;
     cout<< left  << setw(12) << "Juice" ;
     cout<< right << setw(10) << fixed << setprecision(2) <<1 << endl;
     cout<< "--------------------------------------------------\n";
     cout<< left << setw(12) << "Subtotal: 11.00\n";
     cout<< left << setw(12) << "Tax (12%): \n";
     cout<< left << setw(10) << "";
     return 0;
}