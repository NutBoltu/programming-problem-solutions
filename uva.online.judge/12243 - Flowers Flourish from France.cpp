#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
 int main()
 {
        char line[1000];
        char *word;
        while(gets(line))
        {

            if(strcmp(line,"*")==0) break;

            word = strtok(line," ");
            char c= word[0];
            int val=(int)c;
            char c2;
            if(val>96) c2=(char)(c-32);
            else c2=(char)(c+32);

            bool Yes=true;
            while(word!=NULL)
            {

                if(word[0]!=c && word[0]!=c2)
                {
                    Yes=false;
                    break;
                }
                word = strtok(NULL," ");

            }

            if(Yes) printf("Y\n");
            else  printf("N\n");

        }

 return 0;
 }
