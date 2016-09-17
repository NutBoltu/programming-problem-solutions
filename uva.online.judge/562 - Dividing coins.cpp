#include<iostream>
using namespace std;
int list[101],sum[50001];

int knapsack(int N,int W)
{
    for(int i=0;i<N;i++)
    {
        for(int j=W;j>=list[i];j--)
        {
            if(sum[j-list[i]]+list[i]>sum[j])
            sum[j]=sum[j-list[i]]+list[i];
        }

    }

  return sum[W];


}
int main()
{
    int N,W,S,T;
    cin>>T;
    while(T--)
    {
        cin>>N;
        S=0;
        for(int i=0;i<N;i++)
        {
            cin>>list[i];
            S+=list[i];
        }
        W=S/2;
        for(int i=0;i<N*500;i++) sum[i]=0;
        int Diff=S-2*knapsack(N,W);
        cout<<Diff<<endl;


    }



    return 0;
}

