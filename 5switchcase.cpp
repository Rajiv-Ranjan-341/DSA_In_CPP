#include<iostream>
using namespace std;
 
 int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;

    switch (age)
    {
    case 'age>18': 
           cout<<"you are 18 and go to collage";

        break;
    case 21: 
           cout<<"you are 21";

        break;
    
    default:
           cout<<"no special cases";

        break;
    }


    return 0;
 }