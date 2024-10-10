#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n, sum=0;
    cout << "Enter the number of subjects :";
    cin >> n;
    int subjects[n];

    // input
    for(int i= 0; i<n; i++){
        cout << "Marks for he subjects :" << i+1 << "=";
        cin >> subjects[i];
        sum = sum + subjects[i];
    }
    cout << "Total Marks : " << sum << endl;

    float avg = (float) sum/ n;
    cout << "Averege Mark : " << avg << endl;

    // minimum and maximum marks
    int max = subjects[0];
    int min = subjects[0];

    for (int i = 1; i<n; i++){
    if(max < subjects[i]){
        max = subjects[i];
    }
    if(min > subjects[i]){
        min = subjects[i];
    }

   
        

    }
    cout << "Maximum Marks = " << max << endl;
    cout << "Minimum Marks = " << min << endl;

    getch();
}