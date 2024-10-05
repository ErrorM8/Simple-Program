#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int dgt;
    cout << "Enter the number : ";
    cin >> dgt;

    switch(dgt)
    {
        case 0:
        cout << "Zero";
        break;
        case 1:
        cout << "One";
        break;
        case 2:
        cout << "Two";
        break;
        case 3:
        cout << "Three";
        break;
        case 4:
        cout << "Four";
        break;
        case 5:
        cout << "Five";
        break;
        case 6:
        cout << "Six";
        break;
        case 7:
        cout << "Seven";
        break;
        case 8:
        cout << "Eight";
        break;
        case 9:
        cout << "Nine";
        break;
        case 10:
        cout << "Ten";
        break;

        default:
        cout << "Not a digit";
    }
    getch();
}