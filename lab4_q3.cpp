//program to enter temperature in farenheit to temperature in celsius
// include library
#include<iostream>
using namespace std;
// main function
int main()
{
float f,c;
cout << "\n enter temperature in farenheit to convert it into celsius \n";
cin >> f;
c = ((f-32)*5)/9;
cout << "Temperature in farenheit is" << f << endl;
cout << "Temperature in celsius is" << c << endl;
return 0;
}
