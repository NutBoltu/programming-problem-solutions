#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int m,n,Case =1,numberofParents=0;
bool Tree=true;
map<int,int> vectorIndex;
map<int,int> Parent;
vector<int> Child[500];
vector<int> Nodes;

bool Search(int R)
{
    int index;
    if(vectorIndex.find(R)==vectorIndex.end()) return Tree;
    else index= vectorIndex.find(R)->second;


    for(int i=0;i<Child[index].size();i++)
    {
        bool find=false;
        for(int j=0;j<Nodes.size();j++)
        {
            if(Nodes.at(j)==Child[index].at(i)){ find=true;break;}
        }
        if(!find) Nodes.push_back(Child[index].at(i));
        else
        {
            Tree=false;
            break;
        }

        bool temp=Search(Child[index].at(i));
        if(!temp) break;
    }
    return Tree;
}
void Initialize()
{

    vectorIndex.clear();
    Parent.clear();
    Nodes.clear();
    for(int i=0;i<numberofParents;i++) Child[i].clear();
    numberofParents=0;
    Tree=true;
}
int main()
{


    while(cin>>m>>n)
    {
        if(m<0 && n<0) break;
        if(!m && !n)
        {

           if(Tree)
           {
               map<int,int>::iterator it;
                int Root = -1;
                for(it = Parent.begin();it!=Parent.end();++it )
                {
                    if(it->second == 0)
                    {
                        Root=it->first;
                        break;
                    }
                }
                if(Root!=-1)
                {
                   Nodes.push_back(Root);
                   Search(Root);
                }

                 if(Nodes.size()!=Parent.size()) Tree=false;
                 if(Tree) cout<<"Case "<<Case++<<" is a tree."<<endl;
                   else cout<<"Case "<<Case++<<" is not a tree."<<endl;

           }
           else cout<<"Case "<<Case++<<" is not a tree."<<endl;

            Initialize();
        }
        else if(m==n) Tree=false;
        else
        {
            if(vectorIndex.find(m)== vectorIndex.end()) vectorIndex.insert(pair<int,int>(m,numberofParents++));
            Child[vectorIndex.find(m)->second].push_back(n);

            if(Parent.find(m)==Parent.end()) Parent.insert(pair<int,int>(m,0));
            if(Parent.find(n)==Parent.end()) Parent.insert(pair<int,int>(n,m));
            else if(Parent.find(n)->second==0) Parent.find(n)->second=m;


        }
    }



    return 0;
}
