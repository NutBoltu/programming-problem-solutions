#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
#define maxVal 45001
int N,weight[maxVal],sum,peopleWeight[101],Max;
unsigned long long numofPeople[maxVal],peopleLimit;
int main()
{
    int testCase;
    bool odd;
    scanf("%d",&testCase);
    while(testCase--)
    {
        scanf("%d",&N);

        odd= N%2?true:false;
        peopleLimit =0 ;
        peopleLimit |=  odd? (1LL<<(N+1)/2):(1LL<<N/2);
        memset(numofPeople,0,sizeof(numofPeople));
        memset(weight,0,sizeof(weight));

        for(int i=sum=0;i<N;sum+=peopleWeight[i++]) scanf("%d",&peopleWeight[i]);

        weight[0]=1;
        numofPeople[0] =1;
        Max = 0;

        for(int i=0;i<N;i++)
        {
            for(int j=sum/2;j>=0;j--)
            {
                if(weight[j] && j+peopleWeight[i]<=(sum/2))
                {
                    weight[j+peopleWeight[i]] =1;
                    numofPeople[j+peopleWeight[i]] |= numofPeople[j]<<1;

                    if((numofPeople[j+peopleWeight[i]] & peopleLimit) && j+peopleWeight[i]>Max)
                        Max = j+peopleWeight[i];
                    if(odd && (numofPeople[j+peopleWeight[i]] & (peopleLimit>>1)) && j+peopleWeight[i]>Max)
                        Max = j+peopleWeight[i];
                }
            }
        }

        printf("%d %d\n",Max,(sum-Max));
        if(testCase) printf("\n");
    }

    return 0;
}
