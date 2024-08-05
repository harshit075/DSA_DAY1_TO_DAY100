#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter marks: ";
    cin >> n;
    if (n <= 25){
        cout<< "Fail";
    }
    else if (n >= 25 && n <=45){
        cout << "E Grade";
    }
    else if (n >= 45 && n <= 50){
        cout << "D Grade";
    }
    else if(n >= 50 && n <= 60){
        cout << "C Grade";
    }
    else if(n >= 60 && n <= 70){
        cout << "B Grade";
    }
    else if(n>=70 && n >=80){
        cout << "A Grade";
    }
    else {
        cout << "value is wrong";
    }
}