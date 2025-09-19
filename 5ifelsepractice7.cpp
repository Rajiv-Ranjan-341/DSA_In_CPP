//program to check if a triangle is scalene , isoceles, or a equilateral triangle.
#include<iostream>
using namespace std;

int main()
{
    int side_1 , side_2 , side_3;
    cout<<"enter the side 1 "<<endl;
    cin>>side_1;
    cout<<"enter the side 2 "<<endl;
    cin>>side_2;
    cout<<"enter the side 3 "<<endl;
    cin>>side_3;

    if(side_1==side_2&&side_1==side_3&&side_2==side_3){

       cout<<"eq";
    }
    else if (side_1==side_2 ||side_1==side_3||side_2==side_3){
       
        cout<<"iso";

    }
    else{
        cout<<"scalene";
    }
    return 0;
}
