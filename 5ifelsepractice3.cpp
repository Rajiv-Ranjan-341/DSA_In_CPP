/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/
#include<iostream>
using namespace std;
int main(){

int class_held;
cout<<"Enter the class held "<<endl;
cin>>class_held;
int class_attenend;
cout<<"Enter the class you had attended"<<endl;
cin>>class_attenend;

int percentage;
percentage = (class_attenend*100)/class_held;
cout<<"your attendence is "<<percentage <<"%"<<endl;

if (percentage>=75){
cout<<"your attendence is more than 75% you can sit for eaxm ";

}

else{
    cout<<"your attendence is less than 75% you can't sit for eaxm ";
}
    return 0;

}