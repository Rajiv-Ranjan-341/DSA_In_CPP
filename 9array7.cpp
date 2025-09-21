//For users ,finding element in array .
#include<iostream>
using namespace std;

int main(){
    int myArray[]={10, 20, 4 , 5 ,8, 40 };

    int target ,index=-1;
    cout<<"Enter the number: ";
    cin>>target;

    for (int i = 0; i < 6; i++)
    {
        if (myArray[i]==target)
        {
            index=i;
            break;
        }
        
    }
    if (index!=-1)
    {
        cout<<"Element found at index "<<index;
    }
    else{
         cout<<"Element not found ";
    }
    
    
return 0;
}