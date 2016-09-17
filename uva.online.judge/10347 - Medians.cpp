#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,s,res,max;
    while(cin>>a>>b>>c)
    {
        max=0;
        if(max<a) max=a;
        if(max<b) max=b;
        if(max<c) max=c;
        if((a+b+c-max)<=max) res =-1.0;
        else
        {
            s=(a+b+c)/2;
            res = 4/3.0 * sqrt(s*(s-a)*(s-b)*(s-c));
        }
        printf("%.3f\n",res);

    }

    return 0;
}
