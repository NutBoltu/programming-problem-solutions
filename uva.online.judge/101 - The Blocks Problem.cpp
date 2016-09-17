#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

stack <int> block[25],temp;
int position[25];
int N;

void MoveOnto(int a,int b)
{
    int c;

    while(!block[position[a]].empty())
    {
        c = block[position[a]].top();
        if(c==a)break;
        block[position[a]].pop();
        block[c].push(c);
        position[c]=c;

    }

    int d;

    while(!block[position[b]].empty())
    {
        d = block[position[b]].top();
        if(d==b)break;
        block[position[b]].pop();
        block[d].push(d);
        position[d]=d;
    }

    block[position[a]].pop();
    block[position[b]].push(a);
    position[a]=position[b];



}
void MoveOver(int a,int b)
{

     int c;

    while(!block[position[a]].empty())
    {
        c = block[position[a]].top();
        if(c==a)break;
        block[position[a]].pop();
        block[c].push(c);
        position[c]=c;

    }
    block[position[a]].pop();
    block[position[b]].push(a);
    position[a]=position[b];

}
void PileOnto(int a,int b)
{
    int d;

    while(!block[position[b]].empty())
    {
        d = block[position[b]].top();
        if(d==b)break;
        block[position[b]].pop();
        block[d].push(d);
        position[d]=d;
    }
    int c;
    while(!block[position[a]].empty())
    {
        c = block[position[a]].top();
        block[position[a]].pop();
        temp.push(c);
        if(c==a)break;

    }

    while(!temp.empty())
    {
        c = temp.top();
        block[position[b]].push(c);
        position[c]=position[b];
        temp.pop();

    }

}
void PileOver(int a,int b)
{
    int c;
    while(!block[position[a]].empty())
    {
        c = block[position[a]].top();
        block[position[a]].pop();
        temp.push(c);
        if(c==a)break;

    }

    while(!temp.empty())
    {
        c = temp.top();
        block[position[b]].push(c);
        position[c]=position[b];
        temp.pop();

    }



}
int main()
{

    string command1,command2;
    int block1,block2;
     while(cin>>N)
     {
        for(int i=0;i<N;i++)
        {
            block[i].push(i);
            position[i]=i;
        }
        while(cin>>command1)
        {
            if(command1.compare("quit")==0) break;
            cin>>block1>>command2>>block2;
            if(position[block1]!=position[block2])
            {
                if(command1.compare("move")==0 && command2.compare("onto")==0)      MoveOnto(block1,block2);
                else if(command1.compare("move")==0 && command2.compare("over")==0) MoveOver(block1,block2);
                else if(command1.compare("pile")==0 && command2.compare("onto")==0) PileOnto(block1,block2);
                else if(command1.compare("pile")==0 && command2.compare("over")==0) PileOver(block1,block2);


            }


        }

        for(int i=0;i<N;i++)
        {
            printf("%d:",i);
            while(!block[i].empty())
            {
               temp.push(block[i].top());
                block[i].pop();
            }
            while(!temp.empty())
            {
                printf(" %d",temp.top());

                temp.pop();
            }

            printf("\n");
        }




     }



    return 0;
}
