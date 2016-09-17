#include<iostream>

#define M 5
 using namespace std;

 int main()
 {
    int Coin[] ={1,5,10,25,50};
    int N;


    while(cin>>N)
    {
        long int Change[7500][6],temp1,temp2;
        for (int i=0;i<M;i++) Change[0][i] = 1;
        N-=(N%5);
        for (int i=1;i<=N;i++) Change[i][0] = 1;

        for(int i=5;i<=N;i+=5)
        {
            for(int j=1;j<M;j++)
            {
                temp1=0;
                if(i>=Coin[j]) temp1 =  Change[i-Coin[j]][j] ;
                Change[i][j] = temp1 + Change[i][j-1];

            }

        }
        cout<<Change[N][M-1]<<endl;
    }
     return 0;
 }
