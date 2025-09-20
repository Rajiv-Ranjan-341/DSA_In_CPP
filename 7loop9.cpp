// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream>
using namespace std;


int gCd(int a , int b){
  while(b!=0){
    int rem = a%b;
    a = b ;
    b = rem;
  }
  return a;
}

int main(){
    int num_1,num_2, gcd;
    cout<<"Enter the number"<<endl;
    cin>>num_1;
    
    cout<<"Enter the number"<<endl;
    cin>>num_2;

    for(int i=1;i<=num_1&&i<=num_2;i++){
     if (num_1%i==0 && num_2%i==0)
     {
       gcd=i;
     }
    }
    cout<<"The Greatest Common Divisor between "<<num_1 <<" and "<<num_2 <<" is:"<<gcd<<endl;;
     //Function invoked
    // cout<<"The Greatest Common Divisor between "<<num_1 <<" and "<<num_2 <<" is:"<<gCd(num_1,num_2);

return 0;
}