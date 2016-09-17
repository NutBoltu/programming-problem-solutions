#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int Solution[50][11],numofSolution,pattern[11];
vector<int> Graph[6];

void Initialize()
{
    Graph[1].push_back(2);
    Graph[1].push_back(3);
    Graph[1].push_back(5);

    Graph[2].push_back(1);
    Graph[2].push_back(3);
    Graph[2].push_back(5);

    Graph[3].push_back(1);
    Graph[3].push_back(2);
    Graph[3].push_back(4);
    Graph[3].push_back(5);


    Graph[5].push_back(1);
    Graph[5].push_back(2);
    Graph[5].push_back(3);
    Graph[5].push_back(4);


    Graph[4].push_back(3);
    Graph[4].push_back(5);


}
int Search(int pos,int noEdge)
{
    int tempa;
    if(noEdge == 8)
    {
        for(int k=0;k<=8;k++) cout<<pattern[k];
        cout<<endl;
        memcpy(Solution[numofSolution++],pattern,sizeof(pattern));
        pattern[noEdge]=0;
        return 0;
    }
    for(unsigned int i=0;i<Graph[pos].size();i++)
    {
        if(Graph[pos].at(i))
        {
            tempa= Graph[pos].at(i);
            vector<int>::iterator it;

            it = find(Graph[tempa].begin(),Graph[tempa].end(),pos);
            *it = Graph[pos].at(i)=0;
            pattern[noEdge+1]=tempa;
            Search(tempa,noEdge+1);
            *it = pos;
            Graph[pos].at(i) = tempa;
            pattern[noEdge+1]=0;
        }
    }
    return 0;
}
int main()
{
    Initialize();
    numofSolution = 0;
    pattern[0] = 1;
    Search(1,0);

    return 0;
}
