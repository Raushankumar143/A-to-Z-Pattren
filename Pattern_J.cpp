#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n*2;j++)
        {
            if(j==n-1||(i==0&&j>n/2&&j<n*3/2)||(i==n-1&&j<n-1)||(j==0&&i>n/2))
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
