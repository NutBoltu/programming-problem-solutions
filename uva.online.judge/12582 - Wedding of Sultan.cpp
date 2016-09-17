#include<iostream>
#include<cstring>
#include<stack>
#include<cstdio>
#define numofAlphabets 26
using namespace std;
stack<char> path;
string line;
int freq[numofAlphabets];

void CalculateFreq(char ch)
{
    int pos;
    pos = (int)path.top() -65;
    freq[pos]++;
    path.pop();
    if(!path.empty())
    {
      pos = (int)path.top() -65;
      freq[pos]++;
    }
    else freq[pos]--;
}

int main()
{
    int t;
    cin>>t;
    for(int count=1;count<=t;count++)
    {
        cin>>line;
        memset(freq,0,sizeof(freq));
        while(!path.empty()) path.pop();

        //path.push(line[0]);
        for(unsigned int i=0;i<line.length();i++)
        {
            if(!path.empty() && line[i]== path.top()) CalculateFreq(line[i]);
            else path.push(line[i]);
        }
        printf("Case %d\n",count);
        for(int i=0;i<numofAlphabets;i++)
        {
            if(freq[i]) printf("%c = %d\n",i+65,freq[i]);
        }
    }
    return 0;
}

