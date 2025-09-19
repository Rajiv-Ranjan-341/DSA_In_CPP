//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include<iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"Enter the alphabet "<<endl;
    cin>>alpha;
    if(alpha>= 'A' && alpha<='Z' ){
        
        cout<<"this alphabet is in uppercase"<<endl;
    }
     else if (alpha>='a'&& alpha<='z'){
        
        cout<<"this alphabet is in lowercase "<<endl;
    }
    
    else{
        cout<<"this is not an alphabet"<<endl;
        
    }
    
    return 0;
}
