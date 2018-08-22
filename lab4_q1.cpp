//writw a program to enter length in centimeteer and covert it into meter and kilometer
//include library
#include<iostream>
using namespace std;
//main function()
int main()
{ //declare necessary variables,ask for its value and print necessary things
float km, met, cent;
cout <<"\n convet centimeter into meter and kilometer\n";
cout <<"input the distance in centimeter :";
cin >> cent;
met = (cent/100);
km = (cent/100000);
cout << "The distance in meter is ;" << met << endl;
cout << "The distance in kilometer ;" <<km << endl;
return 0;
}

