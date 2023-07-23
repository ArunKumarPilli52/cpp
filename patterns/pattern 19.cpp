
#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter a number:";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      for(int j=1;j<=i-1;j++)
      {
          cout<<" ";
          
      }
      for(int k=i;k<=n;k++)
      {
          cout<<k<<" ";
      }
      
     
      cout<<endl;
  }
  return 0;
}



/*

output:
enter a number:6
1 2 3 4 5 6 
 2 3 4 5 6 
  3 4 5 6 
   4 5 6 
    5 6 
     6 

*/
