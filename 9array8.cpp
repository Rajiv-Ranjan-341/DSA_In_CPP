#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num , maximum= INT_MIN;
    cout<<"Enter the size of an array:  ";
    cin>>num;

    int myArray[num];
    for (int i = 0; i < num; i++)
    {
        cout<<"Enter the element of array: ";
        cin>>myArray[i];

    }
    for (int i = 0; i < num; i++)
    {
        maximum=max(maximum,myArray[i]);
        cout<<maximum<<endl;
    }
    
    

return 0;
}