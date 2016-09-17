#include<iostream>
#include<cstring>
 using namespace std;
 int main()
 {
    int t,N,D,c=1;
    cin>>t;
    char homeWork[100];


    while(t--)
    {
        cin>>N;
        char subject[101][100];
        int days[101];

        for(int i=0;i<N;i++) cin>>subject[i]>>days[i];

        cin>>D;
        cin>>homeWork;


        bool done =false;
        int index = 0;
        for(index=0;index<N;index++)
        {
            if(strcmp (subject[index],homeWork)==0)
            {
                done =true;
                break;
            }
        }
        if(done)
        {
           if(days[index]<=D) cout<<"Case "<<c<<": Yesss"<<endl;
           else if(days[index]<=D+5) cout<<"Case "<<c<<": Late"<<endl;
           else cout<<"Case "<<c<<": Do your own homework!"<<endl;
        }
        else cout<<"Case "<<c<<": Do your own homework!"<<endl;
        c++;
    }
     return 0;
 }
