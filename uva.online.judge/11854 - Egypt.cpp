#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double a,b,c;
    while(true)
    {
        cin>>a>>b>>c;
        if(!a && !b && !c) break;
        if((a*a+b*b)==(c*c)) cout<<"right"<<endl;
        else if((c*c+b*b)==(a*a)) cout<<"right"<<endl;
        else if((a*a+c*c)==(b*b)) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

    return 0;
}
