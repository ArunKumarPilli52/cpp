
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}

/*

output:
enter a number:6
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
 6 6 6 6 6 6

*/
