#include<iostream>
using namespace std;

int main(){
   //user gives size and element of an array.
   int num  , i;
   cout<<"Enter the size of array: ";
    cin>>num;
    
   int array[num];
 
   for(i=0;i<num;i++){
     cout<<"Enter the element of array["<<i<<"] = ";
     cin>>array[i];
   }
   cout<<"-" <<endl;
   cout<<"Enter the index = ";
 
   cin>>i;
   cout<<"Index number "<<i <<" is: "<<array[i];
   
    return 0;
}