#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int a, b;
    cout << "Enter the Numbers: ";
    cin >> a >> b;

    int max = (a > b) ? a : b;
    cout << max;
    getch();
}