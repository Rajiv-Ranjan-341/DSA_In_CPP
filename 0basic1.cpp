#include<iostream>
#include<iomanip>
using namespace std;

 int main()
 {
    // **************Manipulators*****************
    int a =45, b =4,c =55555;
    cout<<"the value of a is "<<setw(5)<<a<<endl;
    cout<<"the value of b is "<<setw(5)<<b<<endl;
    cout<<"the value of c is "<<setw(5)<<c<<endl;

    cout<<"there are without setw "<<endl;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;

    
    
    return 0;
 }
 