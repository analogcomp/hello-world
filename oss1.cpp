#include<iostream>
using namespace std;
int main()
{
    int n,y,x=0;
    cout<<"enter a 3 digit number";
    cin>>n;
    while(n!=0)
    {
        y=n%10;
        x=10*x+y;
        n=n/10;
    }
    cout<<x;

}