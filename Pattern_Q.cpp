#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter size:";
   cin>>n;
   for(int i=0;i<n*2;i++)
   {
       for(int j=0;j<n;j++)
       {
            if(i==0&&j!=0&&j!=n-1||j==0&&i!=0&&i<n-1||j==n-1&&i!=0&&i<n-1||i==n-1&&j!=0&&j!=n-1||i-j==n/2&&i>=n)
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

