#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    if ((ch>= 'a' && ch <= 'z') || (ch>= 'A' && ch <= 'Z')){
        cout<< "Alphabet";
    }
    else if(int(ch)>= 48 && int(ch) <= 57){
        cout<< "Digit";
    }
    else {
        cout<< "special char";
    }
    return 0;
}
