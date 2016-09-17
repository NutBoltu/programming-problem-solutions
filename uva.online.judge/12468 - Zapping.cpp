#include<iostream>

using namespace std;

int main()
{
    int d1,d2,x,y;
    while(cin>>x>>y)
    {
        if(x == -1 && y== -1) break;
        if(x>y)
        {
            y = x - y;
            x = x - y;
            y = x + y;
        }
        d1 = y-x;
        d2 = x+100-y;
        if(d1<d2) cout<<d1<<endl;
        else cout<<d2<<endl;

    }

    return 0;
}
