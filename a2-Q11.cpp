// pattern 11

#include<iostream>
using namespace std;
int main()
{
    int i,j,num,count=1;
    cout<<"Enter a number : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
