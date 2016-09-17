#include<iostream>
#include<cstdio>
#include<cstring>
#include <algorithm>

using namespace std;
char sample[101][31],test[101][31],Common[101][31];
int L[101][101];

int LongestSubsequence(int S,int T)
{
    for(int i=0;i<T;i++) L[i][0]=0;
    for(int j=0;j<S;j++) L[0][j]=0;

    for(int i=1;i<=T;i++)
    {
        for(int j=1;j<=S;j++)
        {
             if(!strcmp(test[i-1],sample[j-1])) L[i][j]=L[i-1][j-1]+1;
            else L[i][j]=max(L[i][j-1],L[i-1][j]);
        }

    }

    return L[T][S];

}
int main()
{

    char a[31];
    int sampleFlag=0,sCount=0,tCount=0;
    while(cin>>a)
    {
         if(!strcmp("#",a))  sampleFlag++;
         if(sampleFlag==0 && strcmp("#",a))       strcpy(sample[sCount++],a);
         else if (sampleFlag==1 && strcmp("#",a)) strcpy(test[tCount++],a);
         else if(sampleFlag==2)
         {
             int len=LongestSubsequence(sCount,tCount);

             int m=tCount;
             int n=sCount;

             while(len!=0)
             {
                if(L[m-1][n]==len)
                {
                    while(L[m-1][n]==len) m--;
                }
                else if(L[m][n-1]==len)
                {
                    while(L[m][n-1]==len) n--;
                }
                else
                {
                    strcpy(Common[len--],test[m-1]);
                    m--;
                    n--;
                }


             }


             bool space=false;
             for(int i=1;i<=L[tCount][sCount];i++)
             {
                if(space) cout<<" ";
                space=true;
                cout<<Common[i];
             }
             cout<<endl;
             sampleFlag=0;
             sCount=0;
             tCount=0;
         }



    }


    return 0;

}
