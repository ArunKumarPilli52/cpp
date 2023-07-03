
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=5;i>=n;i--)
    {
      for(int j=1;j<=i;j++)
      {
          cout<<"*";
      }
      cout<<endl;
    }
}