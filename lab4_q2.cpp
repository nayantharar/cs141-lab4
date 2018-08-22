//program to convert temperature in celsius to temperature in farenheit
//include library
#include<iostream>
using namespace std;
//main function
int main ()
{
float c,f ;
cout << "\n enter temperature in celsius to convert it to farenheit \n";
cin >> c;
f=((c*9)/5)+32;
cout << "The temperature in celsius is ;"<< c << endl;
cout << "The temperature in farenheit is;" << f << endl;
return 0;
}
