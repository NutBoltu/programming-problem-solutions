#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long x,y,r,res,k;
    cin>>t;

    while(t--)
    {
        cin>>x>>y;

        if((x+2)==y) cout<<x+1<<endl;
        else
        {
            r = x-y+2;
            res = r+1;
            bool possible = false;
            for (long i=1;i<=sqrt(r);i++)
            {
                if(r%i==0)
                {
                    if(((x%i)+2)==y && i<res)
                    {
                        res = i;
                        possible =true;

                    }
                    k = r/i;
                    if(((x%k)+2)==y && k<res)
                    {
                        res = k;
                        possible =true;

                    }

                }

            }

            if(possible) cout<<res<<endl;
            else cout<<"Impossible"<<endl;
        }
    }
    return 0;
}
