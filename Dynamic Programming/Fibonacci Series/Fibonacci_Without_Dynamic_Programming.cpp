#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<0)
    {
        return -1;
    }
    else if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{

    cout<<"Enter the number of terms:"<<endl;
    int n;
    cin>>n;
    cout<<"Fibonacci Series are :"<<endl;
    cout<<fib(n)<<endl;

    return 0;
}
