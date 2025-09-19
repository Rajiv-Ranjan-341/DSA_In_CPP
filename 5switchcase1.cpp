#include<iostream>
using namespace std;

int main (){

    double num_1 ,num_2;

    cout<<"Enter the first number"<<endl;
    cin>>num_1;
    
    char arithmetic;
    cout<<"Enter the opreator"<<endl;
    cin>>arithmetic;

    cout<<"Enter the second number"<<endl;
    cin>>num_2;

     switch (arithmetic)
     {
     case '+':
           cout<<num_1<<"+"<<num_2<<"="<<num_1+num_2<<endl;
        
        break;
     case '*':
           cout<<num_1<<"*"<<num_2<<"="<<num_1*num_2<<endl;
        
        break;
     case '-':
           cout<<num_1<<"-"<<num_2<<"="<<num_1-num_2<<endl;
        
        break;
     case '/':
           cout<<num_1<<"/"<<num_2<<"="<<num_1/num_2<<endl;
        
        break;
     
     default:
           cout<<"invaild statement";

    
        break;
     }



    return 0;
}