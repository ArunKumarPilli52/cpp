
#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter a number:";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cout<<" ";
  }
  cout<<" *";
  cout<<endl;
for(int i=1;i<=n;i++)
  {
      for(int j=n;j>i;j--)
      {
          cout<<" ";
      }
      cout<<" *";
      for(int k=1;k<=i+i;k++)
      {
          cout<<" ";
      }
      cout<<"* ";
      cout<<endl;
  }
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i;j++)
      {
          cout<<" ";
      }
      cout<<"*";
      for(int k=n+n;k>=i;k--)
      {
          cout<<" ";
      }
      cout<<"* ";
      cout<<endl;
  }
  
}

\*
output:
enter a number:5
      *
     *  * 
    *    * 
   *      * 
  *        * 
 *          * 
 *          * 
  *         * 
   *        * 
    *       * 
     *      * 


*\
