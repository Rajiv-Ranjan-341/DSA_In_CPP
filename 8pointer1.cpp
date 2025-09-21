#include<iostream>
using namespace std;

int main(){
    int a = 4;
     int* p =&a;
    cout<<"The value of a is:"<<*(p)<<endl;

    //new operator
    // int *prt = new int(45);
    float *prt = new float(34.3445);
    cout<<"The value at address ptr is: "<<*(prt)<<endl;

    int *myArray = new int[3];
    myArray[0] = 10;
    myArray[1] = 30;
    myArray[2] = 40;

    delete[] myArray; // delete operator.
  cout<<"The value of arr[0] is: "<<myArray[0]<<endl;
  cout<<"The value of arr[1] is: "<<myArray[1]<<endl;
  cout<<"The value of arr[2] is: "<<myArray[2]<<endl;

return 0;
}