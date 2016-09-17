#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int nodeColor[201];

int main()
{
    int numofnodes,numofedges,x,y,currNode;
    bool bicolorable;

    while(cin>>numofnodes && numofnodes)
    {
        memset(nodeColor,0,sizeof(nodeColor));
        cin>>numofedges;
        bicolorable=true;
        vector<int> edge[201];

        for(int i=0;i<numofedges;i++)
        {
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        queue<int> bfs;
        bfs.push(0);
        nodeColor[0] = 1;

        while(!bfs.empty() && bicolorable)
        {

            currNode = bfs.front();
            bfs.pop();

            for(int i=0;i<edge[currNode].size() && bicolorable;i++)
            {

                if(nodeColor[edge[currNode].at(i)]==0)
                {
                    if(nodeColor[currNode]==1) nodeColor[edge[currNode].at(i)] = 2;
                    else nodeColor[edge[currNode].at(i)] = 1;
                    bfs.push(edge[currNode].at(i));
                }
                else if(nodeColor[edge[currNode].at(i)] == nodeColor[currNode] )
                {
                    bicolorable = false;
                    break;
                }

            }

        }
        if(bicolorable) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;

    }
}
