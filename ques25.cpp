//Write a Program for find total and average of five subjects.
#include <iostream>
using namespace std;

int main(){
    int hindi, eng, sci, sst, computer;
    cout << "Enter the markes od all 5 sub: ";
    cin>> hindi >> eng >> sst >> sci >> computer ;

    int total = hindi + eng + sci + sst + computer;
    int average = total/5;

    cout << "Total marks is: " << total <<endl;
    cout << "Average Marks is: " << average <<endl;
}