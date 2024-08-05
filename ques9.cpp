#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<< " Enter the year: ";
    cin>> n;

    if (n%4 == 0){
        cout<<"yeah its an leap year";
    }
    else{
        cout<<"oops, better luck next year";
    }

}