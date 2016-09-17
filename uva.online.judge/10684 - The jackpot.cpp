#include<iostream>
#include<cstdio>
using namespace std;
int Set[10001];
int MaxIntervalSum(int N)
{
    int TotalMax,CurrentMax;
    TotalMax=CurrentMax= Set[0];
    for(int i=1;i<N;i++)
    {
        CurrentMax+=Set[i];
        if(Set[i]>CurrentMax) CurrentMax=Set[i];
        if(CurrentMax>TotalMax) TotalMax=CurrentMax;
     }


    return TotalMax;
}
int main()
{
    int N;
    while(cin>>N)
    {
        if(!N) break;
        for(int i=0;i<N;i++) cin>>Set[i];
        int Val = MaxIntervalSum(N);
        if(Val>0) printf("The maximum winning streak is %d.\n",Val);
        else printf("Losing streak.\n");
    }

    return 0;
}
