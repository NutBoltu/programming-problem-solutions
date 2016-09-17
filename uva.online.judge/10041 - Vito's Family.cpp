#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,Street[510],r;
    cin>>T;
    while(T--)
    {
        cin>>r;
        for(int i=0;i<r;i++)
        {
            cin>>Street[i];
        }
        sort(Street,Street+r);
        int median;
        if(r%2) median= (r+1)/2;
        else median=(r/2);

        int Sum=0;
        for(int i=0;i<r;i++) Sum+=abs(Street[i]-Street[median-1]);

        cout<<Sum<<endl;

    }
    return 0;
}
