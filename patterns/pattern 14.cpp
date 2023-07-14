
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        for(int m=n;m>i;m--)
        {
            cout<<" ";
        }
        for(int k=i;k>1;k--)
        {
            cout<<k;
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
