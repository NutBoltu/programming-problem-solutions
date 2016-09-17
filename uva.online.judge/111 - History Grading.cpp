#include<iostream>
#include<cstdio>
using namespace std;
int A[22],B[22];
int max(int a,int b)
{
    return a > b ? a : b;
}

int LongestSubsequence(int N)
{
    int L[22][22];
    for(int i=0;i<N;i++) L[i][0]=L[0][i]=0;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(A[i]==B[j]) L[i][j]=L[i-1][j-1]+1;
            else L[i][j] = max(L[i][j-1],L[i-1][j]);
        }
    }

    return L[N][N];

}

int main()
{
    int N,num;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        cin>>num;
        A[num]=i;

    }

    while(cin>>num)
    {
        B[num]=1;
        for(int i=2;i<=N;i++)
        {
            cin>>num;
            B[num]=i;
        }
        int Ls = LongestSubsequence(N);
        cout<<Ls<<endl;

    }


    return 0;
}
