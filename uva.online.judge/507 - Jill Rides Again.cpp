#include<iostream>
#include<cstdio>
int Niceness[20005];
int start,end,S,E;
using namespace std;

int MaxIntervalSum(int N)
{
    int maxsum=Niceness[0];
    int currentsum=Niceness[0];
    S=start=1;
    E=end=start+1;
    int Diff=E-S;
    for(int i=1;i<N;i++)
    {
        currentsum+=Niceness[i];
        if(Niceness[i]>currentsum)
        {
            currentsum=Niceness[i];
            start=i+1;
            end=i+2;
        }
        else end=i+2;


        if(currentsum>maxsum)
        {
             maxsum=currentsum;
                S=start;
                E=end;
                Diff=E-S;
        }
        else if(currentsum==maxsum)
        {
            if(Diff<(end-start))
            {
                S=start;
                E=end;
                Diff=E-S;
            }
        }


    }
    return maxsum;
}

int main()
{
    int N;
    cin>>N;
    int numofroute;

    for(int c=1;c<=N;c++)
    {
        cin>>numofroute;

        for(int i=0;i<numofroute-1;i++) cin>>Niceness[i];

        int sum=MaxIntervalSum(numofroute-1);
        if(sum>=0) printf("The nicest part of route %d is between stops %d and %d\n",c,S,E);
        else printf("Route %d has no nice parts\n",c);
    }


    return 0;
}
