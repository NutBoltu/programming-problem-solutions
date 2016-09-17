class MinStack{
    
    public:
        stack<int> mystack;
        stack<int> minval;
        void push(int x) {
            mystack.push(x);
            if(minval.empty() || x<=minval.top()) minval.push(x);
        }

        void pop() {
            if(!mystack.empty()){

                if(mystack.top() == minval.top()) minval.pop();
                mystack.pop();
            }

        }

        int top() {
            return mystack.empty() ? 0 : mystack.top();
        }

        int getMin() {
            return minval.empty() ? 0 : minval.top();
        }


};