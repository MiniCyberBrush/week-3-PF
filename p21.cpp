#include <iostream>
using namespace std;
main()
{
    cout << "Enter your name = ";
    string name;
    cin >> name;
    cout << "Enter Marks in matric (out of 1100) = ";
    float marks_matric;
    cin >> marks_matric;
    cout << "Enter marks in intermediate (out of 550)= ";
    float marks_inter;
    cin >> marks_inter;
    cout << "Enter marks in ECAT = ";
    float marks_ecat;
    cin >> marks_ecat;
    float aggregate;
    aggregate = (marks_matric / 1100 * 10) + (marks_inter / 550 * 40) + (marks_ecat / 400 * 50);

    cout << "The Aggregate score for " << name << " is " << aggregate;
}
