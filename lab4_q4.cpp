//program to convert days into years, weeks and days
// include library
#include<iostream>
using namespace std;
int main()
{
cout <<"\n It is arbitrarily chosen that a year has 365 days \n";
int d,y,w,D;
//ask for number of days
cout <<"\n Enter number of days to convert to years, weeks and days and to print it \n";
cin >> d;
y = d/365;
w = (d%365)/7;
D = (d%365)%7;
cout << "No. of days is" << d << endl;
cout <<"\n No. of years :: "<<y<<"\n No. of weeks ::"<<w<<"\nNo. of days :: "<<D<<"\n";
return 0;
}

