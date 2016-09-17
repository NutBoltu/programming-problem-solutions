#include<stack>
class Solution {
public:
    bool isValid(string s) {
        
        stack<char> pStack;
        char ch;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            {
                pStack.push(s[i]);
            }
            else if (s[i]==')')
            {
                if(!pStack.empty() && pStack.top()=='(') pStack.pop();
                else return false;
            }
            else if (s[i]=='}')
            {
                if(!pStack.empty() && pStack.top()=='{') pStack.pop();
                else return false;
            }
            else if (s[i]==']')
            {
                if(!pStack.empty() && pStack.top()=='[') pStack.pop();
                else return false;
            }
            
        }
        
        return pStack.empty();
    }
};