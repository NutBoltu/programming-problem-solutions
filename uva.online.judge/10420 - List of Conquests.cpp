#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
struct country
{
    char name[75];
    int num;

};
bool sortbyName(const country &a,const country &b )
{
    return strcmp(a.name,b.name)<0;
}
int main()
{
    int t;
    char str[101],*name;
    vector<country> clist;
    vector<country>::iterator it;
    cin>>t;
    getchar();


    while(t--)
    {
        gets(str);
        name = strtok(str," ");

        bool find = false;
        for(it = clist.begin();it!=clist.end();++it)
        {
            if(!strcmp(it->name,name))
            {
                it->num++;
                find =true;
                break;
            }
        }
        if(!find)
        {
            country temp;
            strcpy(temp.name,name);
            temp.num = 1;
            clist.push_back(temp);
        }

    }
        sort(clist.begin(),clist.end(),sortbyName);

        for(it = clist.begin();it!=clist.end();it++)
        {
            cout<<it->name <<" "<<it->num<<endl;
        }
    return 0;
}
