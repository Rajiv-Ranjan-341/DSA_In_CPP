#include<iostream>
using namespace std;

int main(){
// **************break;******************
    for (int i = 0; i < 10; i++)
    {
        
        cout<<i<<endl;
        if (i==4)
        {
            break;
        }
        
    }
// ******************continue;******************
for (int i = 0; i < 10; i++)
    {
        
        if (i==4)
        {
            continue;
        }
        cout<<i<<endl;
    }


    return 0;

}