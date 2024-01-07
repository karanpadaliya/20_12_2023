//Write a Program to find if a given number is neutral or not using a ladder if else.

#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter a Number:- ";
    cin>>a;

    if (a>0)
    {
        cout<<"This is Positive number";
    }
    else{
        if (a<0){
            cout<<"This is Negative number";
        }
        else{
            cout<<"This is Neutral Number";
        }
    }
    return 0;
}