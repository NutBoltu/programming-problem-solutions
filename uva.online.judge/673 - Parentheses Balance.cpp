#include<iostream>
#include<stack>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int N;
    char Input[150];
    bool isCorrect;
    stack <char> parenthesis;
    scanf("%d\n",&N);
    while(N--)
    {

        isCorrect=true;
        while(!parenthesis.empty()) parenthesis.pop();
        gets(Input);
        for(int i=0;i<strlen(Input);i++)
        {
            if(Input[i]=='(')
            {
                parenthesis.push('(');

            }
            else if(Input[i]=='[')
            {
                parenthesis.push('[');
            }
            else if(Input[i]==']')
            {
                if(parenthesis.empty() || parenthesis.top()!='[')
                {
                    isCorrect=false;
                    break;
                }
                else parenthesis.pop();

            }
            else if(Input[i]==')')
            {

                if(parenthesis.empty() || parenthesis.top()!='(')
                {
                    isCorrect=false;
                    break;
                }
                else parenthesis.pop();
            }

        }
        if(parenthesis.empty() && isCorrect==true) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
