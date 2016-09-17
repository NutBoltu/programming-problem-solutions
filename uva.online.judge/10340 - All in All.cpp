#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,t;
    long int slen,tlen,matchLength,start;
    while(cin>>s)
    {
        cin>>t;
        slen = s.length();
        tlen = t.length();
        matchLength =start = 0;
        for(long int i=0;i<slen;i++)
        {
            for(long int j=start;j<tlen;j++)
            {
                if(s[i]==t[j])
                {
                    start=j;
                    matchLength++;
                    break;
                }
            }
        }
        if(matchLength == slen) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}
