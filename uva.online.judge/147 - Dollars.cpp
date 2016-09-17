#include<iostream>
#include<cstdio>
using namespace std;
long long int dollars[30001];
int main()
{
    long int coins[] ={5,10,20,50,100,200,500,1000,2000,5000,10000};
    double input,t;
    dollars[0]= 1 ;
    for(int i=0;i<11;i++)
    {
        for(int j=5;j<=30000;j++)
        {
            if(j-coins[i]>=0) dollars[j]+= dollars[j-coins[i]];
        }
    }

    while(cin>>input)
    {
        if(input == 0.00) break;
        t=(input*100+1e-5);
        printf("%6.2lf%17.lld\n",input,dollars[(int)t]);

    }

}
