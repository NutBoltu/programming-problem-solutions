#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,root;
    while(cin>>n)
    {
        if(!n) break;
        root = (long long) sqrt(n);
        if(n == root*root) cout<<"yes"<<endl;
        else  cout<<"no"<<endl;
    }
    return 0;
}
