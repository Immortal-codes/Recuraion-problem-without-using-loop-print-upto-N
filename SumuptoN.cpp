#include<iostream>

using namespace std;

void fun(int n)
{
    int t=5;
    if (n<t)
    {
       cout<<n;
       n++;
       fun(n);
    }
    
    
}

int main()
{
    int n=0;
    //int b=5;
    fun(n);
    return 0;
}