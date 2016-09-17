#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
char A[1001],B[1001];
int L[1001][1001];
int max(int a,int b)
{
    return a > b ? a : b;
}

int LongestSubsequence()
{
    int alen=strlen(A);
    int blen=strlen(B);

    for(int i=0;i<blen;i++) L[i][0]=0;
    for(int j=0;j<alen;j++) L[0][j]=0;


    for(int i=1;i<=blen;i++)
    {
        for(int j=1;j<=alen;j++)
        {
            if(A[j-1]==B[i-1]) L[i][j]=L[i-1][j-1]+1;
            else L[i][j] = max(L[i][j-1],L[i-1][j]);
        }
    }

    return L[blen][alen];

}

int main()
{


     while(gets(A)&&gets(B))
    {
        int Ls = LongestSubsequence();
        cout<<Ls<<endl;

    }


    return 0;
}

