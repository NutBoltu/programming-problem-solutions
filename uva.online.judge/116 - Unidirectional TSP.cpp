#include<iostream>
#include<cstdio>
using namespace std;

int A[15][110],Cost[15][110],m,n,Min,path[15][110][110];

int Findlexopath(int i,int k,int j)
{
    int f;
    for(int a=0;a<=j;a++)
    {
        if(path[i][j][a]>path[k][j][a]) {  f=k;break;}
        else if(path[i][j][a]<path[k][j][a]) {  f=i;break;}

    }

    return f;
}

int minIndex(int i,int j)
{
    int minind=1000;
    int min=100000;
    int a,b,c;
    a=(i+m-1)%m;
    b=i;
    c=(i+1)%m;

    if(Cost[a][j]<min)
    {
        min=Cost[a][j];
        minind=a;
    }
    if(Cost[b][j]<min)
    {
        min=Cost[b][j];
        minind=b;
    }
    if(Cost[c][j]<min)
    {
        min=Cost[c][j];
        minind=c;
    }

    if(Cost[a][j]==min && minind !=a) minind=Findlexopath(a,minind,j);
    if(Cost[b][j]==min && minind !=b) minind=Findlexopath(b,minind,j);
    if(Cost[c][j]==min && minind !=c) minind=Findlexopath(c,minind,j);


    return minind;
}

int main()
{

    while(cin>>m>>n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++) cin>>A[i][j];
        }
        for(int i=0;i<m;i++) { Cost[i][0]=A[i][0]; path[i][0][0]=i+1;  }


        for(int j=1;j<n;j++)
        {
            for(int i=0;i<m;i++)
            {
                int min = minIndex(i,j-1);

                Cost[i][j]=A[i][j]+Cost[min][j-1];
                for(int k=0;k<j;k++) path[i][j][k]=path[min][j-1][k];
                path[i][j][j]=i+1;

            }
        }

        Min=999999;
        int temp;

        for(int i=0;i<m;i++)
        {
            if(Cost[i][n-1]<Min) {Min=Cost[i][n-1];temp=i;}
            if(Cost[i][n-1]==Min && temp!=i) temp=Findlexopath(temp,i,n-1);
        }


        for(int j=0;j<n;j++)
        {
            if(j==0) printf("%d",path[temp][n-1][j]);
            else printf(" %d",path[temp][n-1][j]);
        }

        printf("\n%d\n",Min);


    }

    return 0;
}
