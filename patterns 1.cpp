// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


/*
output:
enter a number:5
*
**
***
****
*****
*/
