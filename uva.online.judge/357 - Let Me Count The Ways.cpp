#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long  int cents[30001];

int main()
{
    int coins[] = {1,5,10,25,50};
    int n;
    cents[0]=1;
    for(int i=0;i<5;i++)
    {
        for(int j=1;j<=30000;j++)
        {
            if(j-coins[i]>=0) cents[j]+=cents[j-coins[i]];
        }
    }
    while(cin>>n)
    {
        if(cents[n]>1) printf("There are %llu ways to produce %d cents change.\n",cents[n],n);
        else printf("There is only 1 way to produce %d cents change.\n",n);
    }

    return 0;
}
