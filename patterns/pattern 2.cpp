
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=6;j++)
       {
           cout<<"*";
           
       }
       cout<<endl;
    }
    return 0;
}

/*
enter a number:5
******
******
******
******
******
*/
