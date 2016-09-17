#include<iostream>
#include<cstdio>
#include<cstring>
 using namespace std;
 int freq[1000][2];


 void swap(int i,int j)
 {
    int temp;
    temp=freq[i][1];
    freq[i][1]=freq[j][1];
    freq[j][1]=temp;

    temp=freq[i][0];
    freq[i][0]=freq[j][0];
    freq[j][0]=temp;
}

int main()
{
    char line[1001];

    bool blankline=false;
    while(gets(line))
    {
        if(blankline) printf("\n");
        blankline=true;

        int len= strlen(line);
        int num=0;
        for(int i=0;i<len;i++)
        {
            if(line[i]==31) continue;
            freq[num][0]=line[i];
            freq[num][1]=1;
            for(int j=i+1;j<len;j++)
            {
                if(line[i]==line[j])
                {
                    freq[num][1]++;
                    line[j]=31;
                }
            }
            num++;
        }

        for(int i=0;i<num;i++)
        {
            for(int j=1;j<num-i;j++)
            {
                if(freq[j-1][1]>freq[j][1] ||(freq[j-1][1]==freq[j][1] && freq[j-1][0]<freq[j][0]))
                swap(j-1,j);

            }
        }
        for(int i=0;i<num;i++)  printf("%d %d\n",freq[i][0],freq[i][1]);

    }
    return 0;
}
