//Enter a 2 number and swap the number
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Value of A:";
    cin>>a;
    cout<<"Enter Value of B:";
    cin>>b;

    // c=a;    
    // a=b;
    // b=c;
    a=a+b;  //20=20+30 //50
    b=a-b;  //30=50-30 //20
    a=a-b;  //50=50-20 //30
    cout<<"After Swapping Value of A is: "<<a<<endl;
    cout<<"After Swapping Value of B is: "<<b;
    
}
