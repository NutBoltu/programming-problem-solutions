#include<iostream>
#include<cstring>
#include<queue>
#include<cstdlib>
#include<utility>
using namespace std;
int rowChange[] = {-1,-2,-2,-1,1,2,2,1};
int colChange[] = {-2,-1,1,2,-2,-1,1,2};
int chessboard[10][10],dRow,dCol;
queue <pair<int,int> > selectedPositions ;

void clear(queue<pair<int,int> > &q )
{
    queue<pair<int,int> > empty;
    swap(q,empty);
}

bool isReady(int r,int c)
{
    return ((r<9 && r>0) && (c<9 && c>0) && chessboard[r][c]==-1)? true:false;
}



int numberOfMoves(int row, int col)
{
    int r,c;
    for(int i=0;i<8;i++)
    {
        r = row+rowChange[i] ;
        c = col+colChange[i] ;
        if(isReady(r,c))
        {
            if(r == dRow && c == dCol) return chessboard[row][col]+1;
            else
            {
                chessboard[r][c] =chessboard[row][col]+1;
                selectedPositions.push(make_pair(r,c));
            }
        }
    }

    return 0;
}

int main()
{
    char s[3],d[3];
    int r,c,Moves;

    while(cin>>s>>d)
    {
        memset(chessboard,-1,sizeof(chessboard));
        clear(selectedPositions);
        r = atoi(&s[1]);
        c = (int)s[0]-96;
        dRow = atoi(&d[1]);
        dCol = (int)d[0]-96;

        chessboard[r][c] = 0;
        selectedPositions.push(make_pair(r,c));

        while(!selectedPositions.empty())
        {
            pair<int,int> pos = selectedPositions.front();
            selectedPositions.pop();
            Moves = numberOfMoves(pos.first,pos.second);
            if(Moves) break;
        }

        cout<<"To get from "<<s<<" to "<<d<<" takes "<<Moves<<" knight moves."<<endl;
    }
    return 0;
}
