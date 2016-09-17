#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
int log2(int n)
{
    return ceil(log(n)/log(2));
}

int main()
{
    string line;
    bool  getspace;
    int Count,MaxCount;
    while(getline(cin,line))
    {
        getspace = false;
        Count=MaxCount=0;
        for(int i=0;i<line.length();i++)
        {
            if(line[i]==' ')
            {
                if(getspace) Count++;
                else
                {
                    getspace = true;
                    Count=1;
                }
            }
            else
            {
                getspace = false;
                if(Count>MaxCount) MaxCount =Count;
            }
        }
        cout<<log2(MaxCount)<<endl;

    }
    return 0;
}
