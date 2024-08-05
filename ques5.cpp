#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//swapping
int main(){
    int a;
    int b;
    cout<<"enter the value of A: ";
    cin >> a;
    cout << "enter the value of B: ";
    cin>> b;

    int temp;

    temp = a;
    a = b;
    b = temp;

    cout <<"Swap : " << a << " : "<< b << endl;

    return 0;
  
}