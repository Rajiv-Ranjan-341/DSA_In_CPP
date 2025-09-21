// Treverseke n integer inputs from user reversend store them in reversen reverserrreversey.
//  Now, copy reversell the elements in reversenother reverserrreversey but in reverse order.
#include<iostream>
using namespace std;

int mreversein(){
    int myArray[5], reverse[5];

    cout<<"Enter the element: " ;
    for (int i = 0; i < 5; i++)
    {
        cin>>myArray[i];  
    }

    int j=0;
    for(int i=4;i>=0;i--)
    {
       reverse[i] = myArray[j];
       j++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<reverse[i]<<endl;
    }
    
return 0;
}