#include<iostream>
#include<cstring>
#define QueenNumber 8
using namespace std;

int Result[93][10],leftDiagonal[18],rightDiagonal[18],rowPosition[10],numofSolution,pattern[10];
void PreGenerateSolution(int col)
{
    if(col == QueenNumber+1)
    {
        memcpy(Result[numofSolution++],pattern,sizeof(pattern));
        pattern[col-1]=0;
    }
    else
    {
        for(int row =1;row<=QueenNumber;row++)
        {
            if(!rowPosition[row] && !leftDiagonal[QueenNumber-(row-col)]&&!rightDiagonal[row+col])
            {
                rowPosition[row]=leftDiagonal[QueenNumber-(row-col)]=rightDiagonal[row+col]=1;
                pattern[col] = row;
                PreGenerateSolution(col+1);
                rowPosition[row]=leftDiagonal[QueenNumber-(row-col)]=rightDiagonal[row+col]=0;

            }
        }

    }
}


int main()
{
    numofSolution =0;
    PreGenerateSolution(1);
    int Case=0;
    int MinMove,moves,position[10];
    while(cin>>position[1])
    {
        for(int i=2;i<=QueenNumber;i++) cin>>position[i];
        MinMove =200;
        for(int i=0;i<numofSolution;i++)
        {
            moves =0;
            for(int j=1;j<=QueenNumber;j++)
            {
                if(Result[i][j]!=position[j]) moves++;
            }
            if(moves<MinMove) MinMove = moves;
        }
        cout<<"Case "<<++Case<<": "<<MinMove<<endl;
    }
    return 0;
}
