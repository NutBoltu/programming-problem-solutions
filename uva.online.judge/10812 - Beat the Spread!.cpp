#include<iostream>
using namespace std;
int main ()
{
    int s,d,t,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>s>>d;
        if((s+d)%2) cout<<"impossible"<<endl;
        else
        {
            s1=(s+d)/2;
            s2=(s-d)/2;
            if(s1>=0 && s2>=0)
            cout<<s1<<" "<<s2<<endl;
            else cout<<"impossible"<<endl;
        }
    }

     return 0;
}
