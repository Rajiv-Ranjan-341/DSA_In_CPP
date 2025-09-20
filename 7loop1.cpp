// *******************Multipilction table******************
#include<iostream>
using namespace std;

int main(){
    int nub;
    cout<<"Enter the number:"<<endl;
    cin>>nub;

    int i=1;
    do
    {
       cout<<nub<<"*"<<i<<"="<<nub*i<<endl;
       i++;

    } while (i<=10);
    


    return 0;

}