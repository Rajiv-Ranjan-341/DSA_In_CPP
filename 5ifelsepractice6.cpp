//check whether a number is prime or not?
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your number"<<endl;
    cin>>number;

    if (number==2 && number==3)
    {
        cout<<"prime number";
    }
 

   else if (number%1==0 && number%6==0 || number%4==0 || number==9)
    {
        cout<<"not prime";
    }
 else{
    cout<<"prime number ";
 }
    

    return 0;
}
