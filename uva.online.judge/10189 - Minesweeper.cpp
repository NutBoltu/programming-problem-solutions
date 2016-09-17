#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    char line[110];
    int n,m,count=1,list[110][110];
    bool blankline =false;
        while(cin>>n>>m)
    {
        if(!n && !m) break;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++) list[i][j]=0;

        }

        for(int i=0;i<n;i++)
        {
            cin>>line;
            for(int j=0;j<m;j++)
            {
                if(line[j]=='*')
                {
                        int p=i+1;
                        int q=j+1;
                        list[p][q]=-1;
                        if(list[p+1][q]!=-1) list[p+1][q]++;
                        if(list[p-1][q]!=-1) list[p-1][q]++;

                        if(list[p-1][q-1]!=-1) list[p-1][q-1]++;
                        if(list[p][q-1]!=-1) list[p][q-1]++;
                        if(list[p+1][q-1]!=-1) list[p+1][q-1]++;

                        if(list[p-1][q+1]!=-1) list[p-1][q+1]++;
                        if(list[p][q+1]!=-1) list[p][q+1]++;
                        if(list[p+1][q+1]!=-1) list[p+1][q+1]++;


                }
            }

        }

        if(blankline) printf("\n");
        blankline=true;

        printf("Field #%d:\n",count++);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(list[i][j]==-1) printf("*");
                else printf("%d",list[i][j]);
            }
            printf("\n");
        }


    }
    return 0;
}
