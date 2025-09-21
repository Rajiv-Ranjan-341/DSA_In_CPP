//  Write a program to find the largest and smallest elements in an array.
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num , i ;
    int max_no=INT_MIN, mini_no=INT_MAX; 
    cout<<"Enter the size of array ";
    cin>>num;

    int array[num];
    for ( i = 0; i < num; i++)
    {
        cout<<"Enter the element of array ["<< i <<"] = ";
        cin>>array[i];
    
        max_no= max(max_no, array[i]); //formula hai , max no ko sabse chuta number hona parega , 
        // toh hi max no or array ka comperition hoga or array max ayega.
        mini_no= min(mini_no, array[i]);
    }
    

    cout<<"The maximum is: "<<max_no <<endl;
    cout<<"The minimum is: "<<mini_no<<endl;

    
return 0;
}