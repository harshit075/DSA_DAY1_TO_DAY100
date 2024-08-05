#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int add;
    int sub;
    int multi;
    int div;
    cout<<"Enter the value of A: ";
    cin>> a;
    cout<<"Enter the value of B: ";
    cin>> b;

    cout<<"What do you wanted to do: ";
    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a/b;
    cin>> add;
    cin>> sub;
    cin>> multi;
    cin>> div;


    if(add){
        cout<<add;
    }
    else if(sub){
        cout<<sub;
    }
    else if(multi){
        cout<<multi;
    }
    else{
        cout<<div;
    }

}