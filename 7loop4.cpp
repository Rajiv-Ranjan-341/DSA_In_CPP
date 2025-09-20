// Write a program in C++ to check whether a number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int num, ctr=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
// **************For****************
    // int i;
    // for( i=2;i<num;i++){
       
    //    if (num%i==0)
    //    {
    //     cout<<"this is not prime number."<<endl;
    
    //    break;
    //    }
    // }
    
    //     if(i==num)
    //     {
    //         cout<<"This is prime number."<<endl;
    //     }

    
    for(int i=1;i<=num;i++){
       
       if (num%i==0)
       {
        ctr++;
       }
    }
    
        if(ctr==2)
        {
            cout<<num<<" is prime number."<<endl;
        }
    else{
        cout<<num<<" is not prime number.";
    }
    
return 0;
}