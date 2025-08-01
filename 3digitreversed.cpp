#include<iostream>
using namespace std;
int main()
{
 int n,x=0, y=0;
 cout<<"enter a three digit number: ";
 cin>>n;
if(n>99 and n<1000)
{
    while(n!=0)
{
    y=n%10;
    n=n/10;
    x=10*x+y;
}
cout<<x;
}
else{
    cout<<"invalid input";
}

}