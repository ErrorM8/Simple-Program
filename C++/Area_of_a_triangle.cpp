#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    double Base, Hight, Area;

    cout<< "Enter the Base : ";
    cin>> Base; 

    cout<< "Enter the Hight :";
    cin>> Hight;

    Area = 0.5 * Base * Hight;
    cout<< "Area of a triangle = "<< Area;
    getch();
}
