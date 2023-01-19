// pattern 12

#include<iostream>
using namespace std;
int main()
{
   int i,j,num,f0=0,f1=1,f2=1;
   cout<<"Enter a number : ";
   cin>>num;
   cout<<f0<<endl<<f1<<" "<<f2<<endl;
   for(i=3;i<=num+3;i++)
   {
       for(j=1;j<=i;j++)
       {
          f0=f1;
          f1=f2;
          f2=f1+f0;
          cout<<f2<<" ";
       }
       cout<<endl;
   }
   return 0;
}
