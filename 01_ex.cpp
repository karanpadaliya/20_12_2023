//Write a Program to find the minimum number from the given 3 numbers using if else.

#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter First Number:-";
    cin>>a;
    cout<<"Enter Scound Number:-";
    cin>>b;
    cout<<"Enter Third Number:-";
    cin>>c;

    if (a<b && a<c)
    {
        cout<<"The Minimum Number is: "<<a;
    }
    else if (b<a)
    {
        cout<<"The Minimum Number is: "<<b;
    }
    else{
        cout<<"The Minimum Number is: "<<c;
    }
    return 0;
}