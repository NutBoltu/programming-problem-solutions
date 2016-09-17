#include<iostream>

using namespace std;
int main()
{
    int arr[] = { 1,2,5,14,42,132,429,1430,4862,16796,58786,208012,742900,
2674440,9694845,35357670,129644790,477638700,1767263190 };
    int t;
    while(cin>>t)
    {
        for(int i=0;i<19;i++)
        {
            if(arr[i]==t)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }


    return 0;
}

