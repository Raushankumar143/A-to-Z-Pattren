#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;
    for(int i=0;i<((n*2)+3);i++)
    {
        for(int j=0;j<n+3;j++)
        {
             if((j==0)||((j!=n+2)&&(i==0||i==n+1))||((j==n+2)&&(i!=0&&i<n+1))||(i-j==n+1&&i>=n+2))
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

