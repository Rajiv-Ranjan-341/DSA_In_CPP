//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include <iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout<<"Enter your length"<<endl;
     cin>>length;
    cout<<"enter your breadth"<<endl;
    cin>>breadth;

    if (length=breadth)
    {
        cout<<"this is a square"<<endl;
    }
    else{
        cout<<"this is not a square"<<endl;

    }


    return 0;
}
