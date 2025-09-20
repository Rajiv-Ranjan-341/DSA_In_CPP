//  Write a program in C++ to find a prime number within a range.
// Input number for starting range: 1
// Input number for ending range: 100
// The prime numbers between 1 and 100 are:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
// The total number of prime numbers between 1 to 100 is: 25
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int start, end, fnd =0,cont=0;
    cout<<"Enter the number for starting range: ";
    cin>>start;
    cout<<"Enter the number for ending range: ";
    cin>>end;
    
    cout<<"The prime numbers between "<<start <<" and "<<end <<" are: ";

    for(int i=start;i<=end;i++)
       {
           for(int a=2;a<=sqrt(i);a++)
               {
               if(i%a==0)
                  cont++; 
                  
               }
               if(cont==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 
               }
                cont=0;
       }
       cout<<endl;
       cout<<"The total number of prime numbers between "<<start<<" to "<<end<<" is: "<<fnd<<endl;


return 0;
}