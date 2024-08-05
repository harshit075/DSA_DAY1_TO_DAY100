#include<iostream>
using namespace std;

int main (){
    int age1, age2, age3;
    cout<< "Enter age1: ";
    cin >> age1;
    cout << "Enter Age2: ";
    cin >> age2;
    cout << "Enter Age3: ";
    cin >> age3;

    int youngest = age1;
    int oldest = age1;

    if(youngest > age2){
        youngest = age2;
    }
    if (youngest > age3){
        youngest = age3;
    }

    if(oldest < age2){
        oldest = age2;
    }
    if(oldest < age3){
        oldest = age3;
    }

    cout<< "youngest among all of 3 is: " << youngest <<endl;
    cout<< "oldest among all of 3 is: " << oldest << endl;

    return 0;


}
