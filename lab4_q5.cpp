//program to enter 2 angles of a triangle and to find the third angle
//include library
#include<iostream>
using namespace std;
//main function
int main()
{
int ang1,ang2,ang3;
cout << "\n enter 2 angles of a triangle and to find the third angle\n";
cout << "First angle of the triangle :";
cin >> ang1;
cout << "Second angle of the triangle :";
cin >> ang2;
ang3=180-(ang1+ang2);
cout << "The third angle of the triangle is "<< ang3 << endl;
return 0;
}

