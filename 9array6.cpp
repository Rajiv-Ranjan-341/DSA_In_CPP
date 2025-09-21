//  sorting, the array will be rearranged in ascending order:
#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int myArray[]={10 ,6 ,30, 4, 05, 04};
    int size = sizeof(myArray)/sizeof(myArray[0]);

    sort(myArray , myArray+ 6);

    for (int i = 0; i < size; i++)
    {
        cout<<myArray[i]<<" ";
    }
    


return 0;
}