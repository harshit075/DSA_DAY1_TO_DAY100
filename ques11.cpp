#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<< "check alphabet : ";
    cin >> ch;

    if(ch>= 'a' && ch<='z'){
        cout<<"lower case";
    }
    else if (ch >= 'A' && ch<= 'Z'){
        cout << "Upper case";
    }
    else {
        cout << " Not an alphabet";
    }
}