#include<iostream>
#include<cstring>
#include<cstdio>
#define QueenNumber 8
using namespace std;

int Number[9][9],Result[93][10],rowPostion[10],leftDiagonal[18],rightDiagonal[18],numofSolution,pattern[10];
int PreGenerateSolution(int col)
{
    if(col== QueenNumber)
    {
        memcpy(Result[numofSolution++],pattern,sizeof(pattern));
        pattern[col-1] =0;
    }
    else
    {
        for(int row=0;row<QueenNumber;row++)
        {
            if(!rowPostion[row] && !leftDiagonal[QueenNumber-(row-col)] && !rightDiagonal[row+col])
            {
                rowPostion[row]=leftDiagonal[QueenNumber-(row-col)]=rightDiagonal[row+col]=1;
                pattern[col]=row;
                PreGenerateSolution(col+1);
                rowPostion[row]=leftDiagonal[QueenNumber-(row-col)]=rightDiagonal[row+col]=0;
            }
        }

    }

}


int main()
{
    numofSolution = 0;
    PreGenerateSolution(0);
    int t,Sum,Max;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<QueenNumber;i++)
        {
            for(int j=0;j<QueenNumber;j++) cin>>Number[i][j];
        }
        Max=0;
        for(int i=0;i<numofSolution;i++)
        {
            Sum=0;
            for(int j=0;j<QueenNumber;j++) Sum+=Number[Result[i][j]][j];
            if(Sum>Max) Max=Sum;
        }
        printf("%5d\n",Max);
    }

}
