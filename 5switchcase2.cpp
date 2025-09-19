//  C++  Program to find the maximum between two numbers. Using the switch statement.

#include<iostream>
using namespace std;

int main (){

    int num_1, num_2 ;
    cout<<"Enter the first number"<<endl;
    cin>>num_1;
    cout<<"Enter the second number"<<endl;
    cin>>num_2;
    
   

    switch(num_1<num_2){
        case 0:
        cout<<num_2<<"is not greater";
        break;
        case 1:
        cout<<num_2<<"is greater";
        break;
       

        default:
        cout<<"both number are same";

        break;

    }


    return 0;
}