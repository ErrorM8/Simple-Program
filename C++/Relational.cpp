#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the number :";
    cin >> n;

    if(n%2==0 && n !=0)
    {
        cout << "Even Number";
    }

    else if(n == 0){
        cout << "Null";
    }

    else
        cout << "Odd Number";
    getch();
}