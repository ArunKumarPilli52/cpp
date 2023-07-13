#include<iostream>
using namespace std;
int main()
{
  int n,j,k;
  cout<<"enter a number:";
  cin>>n;
  for(int i=1;i<=n;i++)
    {
      for( int j=i;j<=n-1;j++)
        {
          cout<<" ";
        }
      for(int k=1;k<=i;k++)
        {
          cout<<k;
        }
        for(int k=i-1;k>=1;k--)
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
    1
   121
  12321
 1234321
123454321


*/
