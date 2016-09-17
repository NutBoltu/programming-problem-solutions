#include<iostream>
#include<stdio.h>

using namespace std;
long  int a,b,c,uglynumber[2000];
int acount,bcount,ccount;

 long  int min()
 {
    long  int min =a;
    if(min>b) min=b;
    if(min>c) min=c;

    return min;
 }


int main()
{

    uglynumber[1]=1;
    a=2;
    b=3;
    c=5;
    acount=bcount=ccount=1;

    for( int i=1;i<=1500;i++)
    {
        if(i==1) continue;

        uglynumber[i]=min();

        if(uglynumber[i]==a) a =2*uglynumber[++acount];
        if(uglynumber[i]==b) b =3*uglynumber[++bcount];
        if(uglynumber[i]==c) c =5*uglynumber[++ccount];


    }
    printf("The 1500'th ugly number is %ld.\n",uglynumber[1500]);

}
