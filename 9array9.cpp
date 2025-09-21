#include<iostream>
using namespace std;

int main(){
    int x,y,i,j;
    cout<<"Enter the size of 2D array: ";
    cin>>x>>y;
    int myArray[x][y];

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++){
        
            cout<<"Enter the element of an array["<<i<<"]["<<j<<"] "<<endl;
            cin>>myArray[i][j];
        }
    }
    for ( i = 0; i < x; i++)
    {
       for (j = 0; j < y; j++)
       {
         cout<<"The element are: "<<myArray[i][j]<<endl;
       }
       
    }
    
    
    
    cout<<"Enter the index number of an element: ";
    cin>>i>>j;
    cout<<"At index "<<i << j<<" element are: "<<myArray[i][j];

return 0;
}