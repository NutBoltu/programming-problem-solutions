#include<iostream>
#include<cstdio>
using namespace std;
int H[10][10],V[10][10],Square[10];


bool FindSquare(int i,int j,int p,int q)
{
    bool find =true;

    for(int m= j+1;m<=q;m++)
    {
        if(H[i][m]==0 || H[p][m]==0)
        {

            find=false;
            break;
        }
    }
    if(find)
    {
        for(int m= i+1;m<=p;m++)
        {
            if(V[m][j]==0 || V[m][q]==0)
            {
                find=false;
                break;
            }
        }

    }
    return find;
}

int main()
{
    int N;
    int numofLine;
    char ch;
    int problem=0;

    while(cin>>N)
    {
        problem++;
        if(problem!=1) printf("\n**********************************\n\n");

        cin>>numofLine;
        /*init*/ for(int i=0;i<=N;i++)
                {
                    Square[i+1]=0;
                    for(int j=0;j<=N;j++) H[i][j]=V[i][j]=0;
                }

        /*end init*/

        int inputrow,inputcol;
        for(int i=0;i<numofLine;i++)
        {
            cin>>ch>>inputrow>>inputcol;
            if(ch=='H') H[inputrow][inputcol+1]=1;
            if(ch=='V') V[inputcol+1][inputrow]=1;
        }

        for(int i=1;i<N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                int p=i;
                int q=j;
                while(++p<=N && ++q<=N)
                {
                     bool GetSquare=false;
                    GetSquare=FindSquare(i,j,p,q);
                    if(GetSquare) Square[p-i]++;

                }
            }

        }

        printf("Problem #%d\n\n",problem);


        bool atleastone=false;
        for(int i=1;i<=N;i++)
        {
            if(Square[i]!=0)
            {
                printf("%d square (s) of size %d\n",Square[i],i);
                atleastone=true;
            }
        }
        if(!atleastone) printf("No completed squares can be found.\n");

    }



    return 0;
}
