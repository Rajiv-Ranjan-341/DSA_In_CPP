// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers.
#include<iostream>
using namespace std;

int main(){
    int num,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>num;
   
    // ****************while****************
   
    cout<<"The natural number: "<<endl;
    int a=1;
    while (a<=num)
    {
        cout<<a<<endl;
       sum=a+sum;
       a++;
       
    }
    cout<<"The sum of first natural number: "<<sum<<endl ;

// ***********For**********************

     cout<<"The natural number: "<<endl;
    for (int i = 1; i <= num; i++)
    {    
       sum = sum +i;
       cout <<i<<endl;
        
    }
    cout<<"The sum of first natural number: "<<sum<<endl ;

// ************Do while*******************
    cout<<"The natural number: "<<endl;
    int b=1;
    do
    {
        cout <<b<<endl;
       sum=sum+b;
       b++;
    } while (b<=num);
    cout<<"The sum of first natural number: "<<sum<<endl ;

    
return 0;
}