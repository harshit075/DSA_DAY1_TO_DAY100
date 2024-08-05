#include<iostream>
using namespace std;

int main (){
    int l;
    cout << "Length: ";
    cin>> l;
    int b;
    cout << "Breath: ";
    cin >> b;
    if (l == b){
        cout << "its square";
    }
    else if ( l != b){
        cout << "reactange";
    }
    else{
        cout << " write correct value";
    }

}