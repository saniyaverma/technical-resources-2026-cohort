// pattern 4

#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(j>=i)
            cout<<"*";
            else
            cout<<" ";
        }
    cout<<endl;
    }
    return 0;
}
