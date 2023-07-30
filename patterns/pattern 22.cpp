
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=i;k++)
        {
            cout<<" ";
        }
        
        for(int j=i;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(int k=n-i;k<n+1;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}



/*

output:
enter a number:5
12345
  2345
   345
    45
     5
    45
   345
  2345
 12345


*/
