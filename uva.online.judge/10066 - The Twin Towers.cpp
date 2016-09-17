#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
    int T,N1,N2,firsttower[110],sectower[110],tiles[110][110];
    bool blankline=false;
    T=1;
    while(cin>>N1>>N2)
    {
        if(!N1 && !N2) break;

        for(int i=0;i<N1;i++){cin>>firsttower[i];  tiles[0][i];}
        for(int i=0;i<N2;i++) {cin>>sectower[i];   tiles[i][0];}

        for(int i=0;i<N1;i++)
        {
            for(int j=0;j<N2;j++)
            {
                if(firsttower[i]==sectower[j]) tiles[i+1][j+1]=tiles[i][j]+1;
                else  tiles[i+1][j+1]=max(tiles[i+1][j],tiles[i][j+1]);

            }

        }



        printf("Twin Towers #%d\n",T++);
        printf("Number of Tiles : %d\n\n",tiles[N1][N2]);


    }

    return 0;
}
