#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
int binTodec(char bin[])
{
    int dec =0;
    for(int i=strlen(bin)-1,j=0;i>=0;i--,j++)
    {
        if(bin[i]==49) dec+=pow(2.0,j);
    }
    return dec;
}
int gcd(int p, int q)
{
    if(q>p) return gcd(q,p);
    if(q==0) return p;
    return gcd(q,p%q);
}
int main()
{
    char s1[31],s2[32];
    int t;
    cin>>t;
    for(int c=1;c<=t;c++)
    {
        cin>>s1;
        cin>>s2;
        int k =gcd(binTodec(s1),binTodec(s2));
        if(k!=1) printf("Pair #%d: All you need is love!\n",c);
        else printf("Pair #%d: Love is not all you need!\n",c);
    }
    return 0;
}
