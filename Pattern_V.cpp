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
           if(i==j||i+j==2*n-2)
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

