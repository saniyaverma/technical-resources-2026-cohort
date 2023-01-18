// to check whether a given number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int num,prime=1;
    cout<<"Enter a number : ";
    cin>>num;
      for(int i=2;i<num;i++)
     {
        if(num%i==0)
        prime=0;
     }
     if(prime==0)
     cout<<num<<" is not a prime number.";
     if(prime==1)
     cout<<num<<" is a prime number.";

    return 0;
}
