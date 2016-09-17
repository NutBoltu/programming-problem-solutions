#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int Amount,D;
    int T;
    string command;
    cin>>T;
    Amount=0;
    while(T--)
    {
        cin>>command;
        if(command.compare("donate")==0)
        {
            cin>>D;
            Amount+=D;
        }
        else cout<<Amount<<endl;
    }

    return 0;

}
