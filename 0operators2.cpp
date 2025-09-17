#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    // arithmetic operators
    cout<<"the value of a+b is :"<<a+b<<endl;
    cout<<"the value of a*b is :"<<a*b<<endl;
    cout<<"the value of a/b is :"<<a/b<<endl;
    cout<<"the value of a-b is :"<<a-b<<endl;
    cout<<"the value of a%b is :"<<a%b<<endl;

    cout<<"the value of a++ is :"<<a++<<endl;
    cout<<"the value of a-- is :"<<a--<<endl;
    cout<<"the value of --a is :"<<--a<<endl;
    cout<<"the value of ++a is :"<<++a<<endl;
    cout<<endl;

    // Assignment operator 
    // kisi variable ke value ko assign karne ke liye use karte hai.
    // for ex:
    // int a = 5, b = 9;
    // char rajiv ='A';


    // comparison operator
    cout<<"The follwing are comparrison operator:"<<endl;
    cout<< "The value of a==b is "<<(a==b)<<endl;
    cout<< "The value of a!=b is "<<(a!=b)<<endl;
    cout<< "The value of a<=b is "<<(a<=b)<<endl;
    cout<< "The value of a>=b is "<<(a>=b)<<endl;
    cout<< "The value of a<b is "<<(a<b)<<endl;
    cout<< "The value of a>b is "<<(a>b)<<endl;


    //logical operator
    cout<<"The follwing are logical operator:"<<endl;
    cout<< "The value of logical and operator is "<<((a==b) && (a<b))<<endl;
    cout<< "The value of logical or operator is "<<((a==b) || (a<b))<<endl;
    cout<< "The value of logical not operator is "<<(!(a==b))<<endl;

   
   
   
    return 0;
}


