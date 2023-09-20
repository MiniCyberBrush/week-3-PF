#include<iostream>
using namespace std;
main(){
cout << "enter the name of the cricket team: ";
string name;
cin >> name;
cout << "enter the number of wins: ";
int wins;
cin >> wins;
cout << "enter the number of draws: ";
int draws;
cin >> draws;
cout << "enter the name of losses: ";
int losses;
cin >> losses;
int total_points;
total_points = wins*3 + draws*1;
cout << " Pakistan has obtained " << total_points << " points in the Asia cup tournament" ;




}
