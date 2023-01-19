// pattern14 : Multiplication table


#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    for(int i=1;i<11;i++)
    {
        cout<<x<<" * "<<i<<" = "<<x*i;
            cout<<endl;
    }
    return 0;
}
