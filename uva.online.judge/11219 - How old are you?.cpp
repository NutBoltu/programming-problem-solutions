#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
 {
    int t,i;
    cin>>t;
    int bDate[4],cDate[4];
    char *ch,str[15];

    for(int count = 1;count<=t;count++)
    {
        cin>>str;
        ch = strtok(str,"/");
        i = 0;
        while(ch!=NULL)
        {
            cDate[i++] = atoi(ch);
            ch = strtok(NULL,"/");
        }

        cin>>str;
        ch = strtok(str,"/");
        i = 0;
        while(ch!=NULL)
        {
            bDate[i++] = atoi(ch);
            ch = strtok(NULL,"/");
        }

        if(bDate[2]>cDate[2]) printf("Case #%d: Invalid birth date\n",count);
        else if (bDate[2] == cDate[2])
        {
            if(bDate[1] > cDate[1]) printf("Case #%d: Invalid birth date\n",count);
            else if(bDate[1] == cDate[1])
            {
                if(bDate[0] > cDate[0]) printf("Case #%d: Invalid birth date\n",count);
                else  printf("Case #%d: 0\n",count);
            }
            else  printf("Case #%d: 0\n",count);
        }
        else
        {
            int dateDiff = cDate[0] - bDate[0];
            int monthDiff = cDate[1] - bDate[1];
            if(dateDiff<0) monthDiff--;
            int ageDiff = cDate[2] - bDate[2];
            if(monthDiff<0) ageDiff--;
            if(ageDiff>130) printf("Case #%d: Check birth date\n",count);
            else printf("Case #%d: %d\n",count,ageDiff);
        }

    }

     return 0;
 }
