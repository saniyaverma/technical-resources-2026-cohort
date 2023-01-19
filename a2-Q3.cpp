// pattern 3

#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=0;j<num;j++)
        {
            if(i+j>=num)
            cout<<"*";
            else 
            cout<<" ";
        }
      cout<<endl;
    }
  return 0; 
}
