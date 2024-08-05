#include<iostream>
using namespace std;

int main (){
    char ch;
    cout << "enter alphabet: ";
    cin>> ch;

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout << "Its an alphabet";
    }
    else if(int(ch)>= 48 && int(ch) <= 57){
        cout << "Its an Digit";
    }
    else{
        cout << " Speacial Char";
    }
}