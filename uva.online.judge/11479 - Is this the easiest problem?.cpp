#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int a,b,c;
    int t;
    cin>>t;
    for(int count=1;count<=t;count++)
    {
        cin>>a>>b>>c;

        if((a+b)<=c || (c+b)<=a || (a+c)<=b) printf("Case %d: Invalid\n",count);
        else if(a==b && b==c) printf("Case %d: Equilateral\n",count);
        else if(a == b || b== c || c==a) printf("Case %d: Isosceles\n",count);
        else printf("Case %d: Scalene\n",count);
    }

    return 0;
}
