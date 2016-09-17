#include<iostream>
using namespace std;
int main()
{
    int T,Sum[1010],list[25],Barlength,p;
    cin>>T;
    while(T--)
    {
        cin>>Barlength;
        cin>>p;
        for(int i=0;i<p;i++) cin>>list[i];
        for(int i=0;i<=Barlength;i++) Sum[i]=0;
        for(int i=0;i<p;i++)
        {
            for(int j=Barlength;j>=list[i];j--)
            {
                if(Sum[j-list[i]]+list[i]>Sum[j])
                Sum[j]= Sum[j-list[i]]+list[i];
            }
        }
        if(Sum[Barlength]==Barlength) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}
