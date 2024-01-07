//Find out simple intrest
//i=p*r*t/100
#include <iostream>
using namespace std;
int main(){

    int si,p,t;
    float r;
    
    cout<<"Enter the Principle: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;

    si=p*r*t/100;
    cout<<"The Simple Interst is: "<<si;

    return 0;
}
