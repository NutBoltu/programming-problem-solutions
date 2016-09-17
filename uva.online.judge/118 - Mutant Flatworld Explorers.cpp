#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int I,J,posX,posY,Grid[51][51];
    char ins[101];
    char Dir;
    bool lost;

    scanf("%d %d",&I,&J);

    while((scanf("%d %d %c",&posX,&posY,&Dir))!=EOF)
    {

        scanf("%s",&ins);
        int i=0;
        lost=false;
        while(ins[i]!='\0')
        {
            if(ins[i]=='R')
            {
                if(Dir=='N') Dir='E';
                else if(Dir=='S') Dir='W';
                else if(Dir=='E') Dir='S';
                else if(Dir=='W') Dir='N';

            }
            else if(ins[i]=='L')
            {
                if(Dir=='N') Dir='W';
                else if(Dir=='S') Dir='E';
                else if(Dir=='E') Dir='N';
                else if(Dir=='W') Dir='S';
            }
            else if(ins[i]=='F')
            {
                if(Dir=='N')
                {
                    if(posY==J)
                    {
                        if(Grid[posX][posY]!=1){ lost=true;Grid[posX][posY]=1;break;}

                    }else posY++;
                }
                else if(Dir=='S')
                {
                    if(posY==0)
                    {
                        if(Grid[posX][posY]!=1){ lost=true;Grid[posX][posY]=1;break;}

                    }else posY--;
                }
                else if(Dir=='E')
                {
                    if(posX==I)
                    {
                        if(Grid[posX][posY]!=1){ lost=true;Grid[posX][posY]=1;break;}

                    }else posX++;
                }
                else if(Dir=='W')
                {
                    if(posX==0)
                    {
                        if(Grid[posX][posY]!=1){ lost=true;Grid[posX][posY]=1;break;}

                    }else posX--;
                }
            }

            i++;
        }

        if(lost) printf("%d %d %c LOST\n",posX,posY,Dir);

        else printf("%d %d %c\n",posX,posY,Dir);


    }
    return 0;
}
