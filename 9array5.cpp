// Finding the value of sin , cos ,tan.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num ;
    cout<<"Enter the size of the array: ";
    cin>>num;

    int myArray[num];
    cout<<"Enter the element of the array: ";
    for (int i = 0; i < num; i++)
    {  
        
        cin>>myArray[i];
        
        cout<<"The value of sin("<<myArray[i]<<") = "<<sin(myArray[i])<<endl;
        cout<<"The value of cos("<<myArray[i]<<") = "<<cos(myArray[i])<<endl;
        cout<<"The value of tan("<<myArray[i]<<") = "<<tan(myArray[i])<<endl;
    }
return 0;
}