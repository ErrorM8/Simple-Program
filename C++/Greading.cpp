#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n;

    cout << "Enter the mark : ";
    cin >> n;

    if(n > 100){
        cout << "invalied";
    }
    else if(n>=80)
    {
        cout << "A+";
    }
    else if(n>=70)
    {
        cout << "A";
    }
    else if(n>=60)
    {
        cout << "A-";
    }
    else if(n>=50)
    {
        cout << "B";
    }
    else if(n>=40)
    {
        cout << "C";
    }
    else if(n>=33)
    {
        cout << "D";
    }
    else
    {
        cout << "Fail";
    }

    getch();
}