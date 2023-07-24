
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n+2;i++)
    {
        cout<<" ";
    }
    cout<<" * ";
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i-1;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int p=1;p<=i+i;p++)
        {
            cout<<" ";
            
        }
        for(int k=1;k<=1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<" * ";
    }
    return 0;
}
