#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int a=32, b=12, c;
    c = a & b;              // Bitwise "Or"
    cout << c << endl;

    c = a | b;              // Bitwise "And"
    cout << c << endl;

    c = a ^ b;              // Bitwise "XOr"
    cout << c << endl;

    c = a >> 2;             // Bitwise "Right shift"
    cout << c << endl;

    c = b << 2;             // Bitwise "Left shift"
    cout << c << endl;

    getch();
}
