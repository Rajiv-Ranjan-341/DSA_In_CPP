// Write a program in C++ to find the factorial of a number.
#include<iostream>
using namespace std;

int main(){
    int num, factorial=1;
    cout<<"Enter the number"<<endl;
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        factorial=factorial*i;
    //   cout<<i<<endl;
    }
    cout<<"The factorial of give number is :"<<factorial<<endl;
return 0;
}