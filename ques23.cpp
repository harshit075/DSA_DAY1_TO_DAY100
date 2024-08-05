//Write a program for find area of a circle.
#include<iostream> 
using namespace std;

int main(){
    //area of circle is pie*r*rsqaure
    int r;
    cout << "enter the radius: ";
    cin >> r;

    float pie = 3.14;

    float area = pie*r*r;
    cout<< "Area of circle is : " << area << endl;

    
}