#include<iostream>
using namespace std;

int main(){
    // Array Example and pointer.
    int marks[]={12, 13 ,14 ,15 ,16};

    int schoolMarks[4];
    schoolMarks[0]= 30;
    schoolMarks[1]= 40;
    schoolMarks[2]= 50;
    schoolMarks[3]= 60;
    
  /*Array sorting:
  To sort the elements of an array, you can use the sort function from the <algorithm> library.
  Here's an example:

  #include <algorithm>
  sort(myArray, myArray + 5);  // Sorting the array in ascending order*/

    cout<<"These are schoolaMarks"<<endl;
    cout<<schoolMarks[0]<<endl;
    cout<<schoolMarks[1]<<endl;
    cout<<schoolMarks[2]<<endl;
    cout<<schoolMarks[3]<<endl;

   cout<<"These are marks"<<endl;
   marks[3]=24; //you can change the value of an array.

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
      int i =0;
    // ************  using for loop*****************
      for(i=0;i<5;i++){
     cout<<"The value of marks "<<i <<"is "<<marks[i]<<endl;
     
    }
// *************   using do-while loop*********************
    // do
    // {
    //      cout<<"The value of marks "<<i <<" is: "<<marks[i]<<endl;
    //      i++;
    // } while (i<5);
    
    //************** using while loop********************
    // while (i<5)
    // {
    //      cout<<"The value of marks "<<i <<"is "<<marks[i]<<endl;
    //      i++;
    // }
     cout<<endl;
    // Pointers and arrays
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    
    
return 0;
}