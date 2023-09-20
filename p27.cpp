#include<iostream>
using namespace std;
main(){
cout << "enter the current world population: ";
int population;
cin >> population;
cout << "enter the monthly birth rate (number of births per month): ";
int births;
cin >> births;
int years;
years = births*12*10;
int population_3decade;
population_3decade = population + years;
cout << " the population in three decades will be " << population_3decade;




}
