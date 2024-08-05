#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 3;
    int b = 4;


    b = a + b;
    a = b - a;
    b = b - a;

    cout << a << " : "<< b << endl;
}