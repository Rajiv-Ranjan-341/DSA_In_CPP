// Given a number N, if the number is between 1 and 10 both inclusive then return the 
// number in words (Lower case English Alphabets) otherwise return "not in range".
#include<iostream>
using namespace std;
int main (){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    switch (num)
    {
    case 1:
       cout<<"one"<<endl;
        break;
    
    case 2:
       cout<<"Two"<<endl;
        break;
    
    case 3:
       cout<<"Three"<<endl;
        break;
    
    case 4:
       cout<<"four"<<endl;
        break;
    
    case 5:
       cout<<"Five"<<endl;
        break;
    
    case 6:
       cout<<"Six"<<endl;
        break;
    
    case 7:
       cout<<"Seven"<<endl;
        break;
    
    case 8:
       cout<<"Eight"<<endl;
        break;
    
    case 9:
       cout<<"Nine"<<endl;
        break;
    
    case 10:
       cout<<"Ten"<<endl;
        break;
    
    default:
    cout<<"not in range";
        break;
    }




    return 0;
}