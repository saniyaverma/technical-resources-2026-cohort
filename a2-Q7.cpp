// pattern7


#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j>=i;j++)
        {
            if(i=j)
            cout<<"*";
            else
            cout<<" ";
        }
    cout<<endl;
    }
    return 0;
}
