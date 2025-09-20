// Write a program in C++ to find the last prime number that occurs before the entered number.
#include<iostream>
using namespace std;

int main(){
    int num,ctr=0;
    cout<<"Enter the number :"<<endl;
    cin>>num;
     int i;
       
       for (int n = num - 1; n >= 1; n--) 
    {
        for (int m = 2; m < n; m++) 
        {
            if (n % m == 0){

            ctr++;
        }
        }
        if (ctr == 0) 
        {
            if (n == 1) 
            {
                cout << "no prime number less than 2";
                break;
            }
            cout << n << " is the last prime number before " << num << endl;
            break;
        }
        ctr = 0;
    }
    

return 0;
}