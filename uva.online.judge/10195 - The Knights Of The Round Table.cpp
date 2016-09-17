#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,s,r;
    while(cin>>a>>b>>c)
    {
        if((b+c)<=a || (a+c)<=b || (b+a)<=c) r=0;
        else
        {
            s= (a+b+c)/2;
            r= sqrt((s-a)*(s-b)*(s-c)/s);
        }
        printf("The radius of the round table is: %.3lf\n",r);
    }
    return 0;
}
