class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        vector<int> output;
        int index = 1;
    
        for(unsigned int i=0;i< nums.size();i++){
                output.push_back(index);
                index *= nums.at(i);
        }
        index =1;
        
        for(int i= nums.size()-1; i>=0;i--){
                output.at(i) = output.at(i)*index;
                index *=   nums.at(i);
        }
        
        return output;   
    }
};