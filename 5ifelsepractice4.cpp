/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int  service, salary;
    cout<<"Enter your year of service "<<endl;
    cin>>service;

    if (service>=5)
    {
        cout<<"you will get your 5% bonus"<<endl;
    }
    else if (service < 5){
        cout<<"your service year is less than 5 years";
    }
    cout<<"Enter your salary "<<endl;
    cin>>salary;
    int bonus;
    bonus=(salary/100)*5;

    cout<<"your bonus is"<<bonus;

    return 0;
}
