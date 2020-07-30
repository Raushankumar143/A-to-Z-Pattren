#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter size:";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<4*n;j++)
       {
           if(i==j||i+j==2*n-2||j-i==2*n-2||i+j==4*n-4)
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

