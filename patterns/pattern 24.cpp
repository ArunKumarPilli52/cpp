
#include <iostream>

using namespace std;

int main()
{
   int n,j;
   cout<<"enter the n value:";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int coef=1;
       for(int j=n;j>=i;j--)
       {
           cout<<" ";
       }
       for(int k=1;k<=i;k++)
       {
           cout<<coef<<" ";
           coef=coef*(i-k)/k;
       }
       cout<<endl;
   }
   return 0;
}
