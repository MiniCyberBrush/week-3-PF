#include<iostream>
using namespace std;
main(){
cout << "enter size in megabytes: ";
long long   MB;
cin >> MB;
long long bits;
bits = MB*1024*1024*8;

cout << MB << "Mb is equivalent to " << bits << " bits";




}
