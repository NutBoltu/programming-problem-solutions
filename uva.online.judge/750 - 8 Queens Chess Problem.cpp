#include<iostream>
#include<cstring>
#include<cstdio>
#define QueenNumber 8
using namespace std;
int Result[93][10];
int leftDiagonal[18],rightDiagonal[18],rowPostion[10];
int pattern[10],numofSolution;

int PreGenerateSolution(int col)
{
    if(col == QueenNumber+1)
    {
        memcpy(Result[numofSolution++],pattern,sizeof(pattern));
        pattern[col-1] =0;
    }
    else
    {
        for(int row =1;row<=QueenNumber;row++)
        {
            if(!rowPostion[row] && !leftDiagonal[QueenNumber-(row-col)] && !rightDiagonal[row+col])
            {
                rowPostion[row] =leftDiagonal[QueenNumber-(row-col)] = rightDiagonal[row+col] =1;
                pattern[col] = row;
                PreGenerateSolution(col+1);
                rowPostion[row] =leftDiagonal[QueenNumber-(row-col)] = rightDiagonal[row+col] =0;

            }
        }

    }
    return 0;
}



int main()
{
    int t,r,c,count;
    memset(Result,0,sizeof(Result));
    memset(leftDiagonal,0,sizeof(leftDiagonal));
    memset(rightDiagonal,0,sizeof(rightDiagonal));
    memset(rowPostion,0,sizeof(rowPostion));
    numofSolution = 0;
    PreGenerateSolution(1);
    cin>>t;

    while(t--)
    {
        cin>>r>>c;
        count = 1;
        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #      1 2 3 4 5 6 7 8\n"<<endl;

        for(int i=0;i<=numofSolution;i++)
        {
            if(Result[i][c]==r)
            {
                printf("%2d     ",count++);
                for(int j=1;j<=QueenNumber;j++) printf(" %d",Result[i][j]);
                printf("\n");
            }
        }
        if(t) printf("\n");

    }

    return 0;
}
