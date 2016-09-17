#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int prime[3502],Array[3502];


bool findprime(int a)
{
    bool find= true;

    for(int i=3;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            find=false;
            break;
        }

    }

    return find;
}
int Joseph(int N,int k)
{
    if(N==1) return 1;
    else return ((Joseph(N-1,k+1)+prime[k]-1)%N+1);

}



int main()
{
    prime[0]=2;
    int numofprime=0;
    int i=3;
    while(numofprime<3501)
    {
        if(findprime(i)) prime[++numofprime]=i;
        i=i+2;
    }

    int N;
    while(cin>>N)
    {
        if(N==0) break;
        cout<<Joseph(N,0)<<endl;

    }

    return 0;
}
