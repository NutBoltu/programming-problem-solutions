#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#define INF 32767
using namespace std;

vector<int> visibleRouters[305];
int n,m,visited[305],path[305];
char line[1000];
int s,d,HopCount;
int map[305];
int Search(int source,int depth,int t_path[])
{
    t_path[depth]=source;
    if(source == d)
    {
        if(depth<HopCount)
        {
            HopCount=depth;
            for(int i=1;i<=depth;i++) path[i]=t_path[i];
        }return 0;
    }
    if(visited[source]==1) return 0;
    else visited[source]=1;

    if(source == d && depth<HopCount) HopCount=depth;
    else if (source != d)
    {
        for(int i=0;i<visibleRouters[source].size();i++)
        {
           Search(visibleRouters[source].at(i),depth+1,t_path);
        }

    }

    visited[source]=0;

    return 0;
}
void Initialize()
{
    for(int i=0;i<n;i++) visibleRouters[map[i]].clear();
    memset(map,0,sizeof(map));
     memset(path,0,sizeof(path));

}

int main()
{

    while(cin>>n)
    {
       getchar();
       for(int i=0;i<n;i++)
       {
           gets(line);
           char *ch = strtok(line,"-,");
           int r = atoi(ch);
           map[i]=r;
           ch = strtok(NULL,"-,");
           while(ch!=NULL)
           {
               int t= atoi(ch);
               visibleRouters[r].push_back(t);
               ch = strtok(NULL,"-,");
           }
       }

        cin>>m;

        cout<<"-----"<<endl;
        for(int i=0;i<m;i++)
        {
            cin>>s>>d;
            HopCount =INF ;
            memset(visited,0,sizeof(visited));
            int temp[305];
            Search(s,1,temp);

            if(HopCount== INF) cout<<"connection impossible"<<endl;
            else
            {
              for(int i=1;i<HopCount;i++) cout<<path[i]<<" ";
              cout<<path[HopCount]<<endl;

            }
        }
        Initialize();
    }
     return 0;
}
