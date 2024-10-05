#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long fact = 1;
        for(int i = 2; i <=n; ++i){
            fact *= i;
        }
        cout << fact << endl;
    }
    getch();
}