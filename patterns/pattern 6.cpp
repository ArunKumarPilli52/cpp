
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter n value:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for(int k=1;k<=n-1;k++)
    {
        cout<<"* ";
        for(int j=1;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(int l=1;l<=1;l++)
        {
            cout<<"  *";
        }
        cout<<endl;
        
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"* ";
    }
    return 0;
}


/*
output:
enter n value:5
* * * * * 
*       *
*       *
*       *
*       *
* * * * * 

*/
