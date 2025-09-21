#include<iostream>
using namespace std;

int main(){
    // ****************pointers******************
    int a=5;
    int*b=&a;

    // &--->(Address of ) operator 
    cout<<"The address of a is "<<&a <<endl;
    cout<<"The address of a is "<<b <<endl;

    // *---> (value at )dereference operator
    cout<<"The value at address b: "<<*b <<endl;
    
    // pointer to pointer
    int**c =&b;
    cout<<"The address of b is "<<&b <<endl;
    cout<<"The address of b is "<<c <<endl;
    cout<<"The value at address of b is "<<*c <<endl;
    
    cout<<"The value at address value_at(value_at(c)) is: "<<**c <<endl;



return 0;
}