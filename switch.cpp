#include<iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"Enter a number: ";
    cin >> a;

    switch (a>0){
    case true: {
        cout<< "number is positive";
        break;
    }
        
    
    case false: {
        switch (a!=0){
            case true:{
            cout<< "number is negative";
            break;
            
        }
        case false: {
            cout << "number is zero";
        }
        }
        
        
        
         
    }
    
}
}