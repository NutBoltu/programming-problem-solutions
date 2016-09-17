#include<iostream>
using namespace std;
int main()
{
    int n,m,k;
    while(true)
    {
        cin>>n>>m>>k;
        if(!n && !m && !k) break;
        if(!(m%2)) cout<<"Gared"<<endl;
        else cout<<"Keka"<<endl;
    }

    return 0;
}
