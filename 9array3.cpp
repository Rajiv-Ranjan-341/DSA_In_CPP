/*Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.*/

#include<iostream>
using namespace std;

int main(){
    int Z[5];
    int pos=0 , neg=0 ,odd=0 , even=0 ,zero=0;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the number ";
        cin>>Z[i];
        if (Z[i]>0)
        {
            pos++;
        }
        else if (Z[i]<0)
        {
            neg++;
        }
        else{
            zero++;
        }
        if (Z[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        cout<<"positive numbers "<<pos <<endl;
        cout<<"Negative numbers "<<neg<<endl; 
        cout<<"odd number "<<odd <<endl;
        cout<<"even number "<<even <<endl;
        cout<<"The number is zero "<<zero<<endl;

        
        
    }
    
return 0;
}