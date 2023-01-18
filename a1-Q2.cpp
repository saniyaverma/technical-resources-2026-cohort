/*
   Grading system
   To take marks as input and display message based on the following rules:
    -for marks >90, print excellent
    -for marks >80 and <=90, print good
    -for marks >70 and <=80, print fair
    -for marks >60 and <=70, print meets expectations
    -for marks <=60, print below par
*/

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;
    if (marks>90)
    cout<<"Excellent!";
    else if (marks<=90&&marks>80)
    cout<<"Good:)";
    else if (marks<=80&&marks>70)
    cout<<"Fair";
    else if (marks<=70&&marks>60)
    cout<<"Meets expectations";
    else
    cout<<"Below par";

    return 0;
}


