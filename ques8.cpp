#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 2;
    int b = 5;
    int c = 4;

    if(a<b){
        cout<<"b is maximum";
    }
    else if(b < c){
        cout<< " c is maximum";
    }
    else{
        cout << "a is maximum";
    }
}