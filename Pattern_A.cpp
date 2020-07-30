#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size:";
    cin>>n;
    if(n%2==0)
    {
        n=n+1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n*2)-1;j++)
        {
            if((i+j==n-1)||(j-i==n-1)||((i==n/2)&&((i+j>(n-1))&&(i+j<n*2-1))))
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
