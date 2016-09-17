#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    long long N,res;
    int c=1;
    while(cin>>N)
    {
        if(!N) break;


        res = ceil((3 + sqrt(9.0 + 8.0*N))/2.0);
        cout<<"Case "<<c++<<": "<<res<<endl;
    }
    return 0;
}
