#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "enter the number : ";
    cin >> n;

    if (n > 0){
        cout<< "its positive";
    }
    else if (n < 0){
        cout<< "its negative";
    }
    else{
        cout<< "its zero";
    }
}
