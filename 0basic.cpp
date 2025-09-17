
// there are two type of header file:
// 1. system header file : IT comes with the COMPILER
#include<iostream>
// 2. User defined header file : It is written by the programar 
#include"I'm.rajiv" 
// error dega  agar "I'm.rajiv " naam se nobody file m created nhi ho toh.
using namespace std;

int main (){

// ******************Reference variable***************
    int a=585;
    int & b = a ;
    cout<<a<<endl;
    cout<<b<<endl;
// ****************Typecasting********************
    float d=4.56;
    cout<<"the expresion is "<<(a+d)<<endl;
    cout<<"the expresion is "<<a+int(d)<<endl;
    cout<<"the expresion is "<<a+(int)d<<endl;
    //*************Constants in c++*********************
    const int c = 2;
    cout<<"the value is "<<a;
    // c = 32; //error milega kyuki 'c' ek constant hai.
    cout<<"the value is "<<a;


    return 0;
}