#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sum = 0, n;

    cout << "Enter a number: ";
    cin >> n;

    for(int i=1; i<=n;i++)
    {
        sum = sum + i;
    }
    cout << sum;
    getch();
}
