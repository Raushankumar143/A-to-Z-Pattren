#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    if(n%2==0)
        n=n+1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0||i==0||i==n/2)
            {
                cout<<"*";
            }else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
