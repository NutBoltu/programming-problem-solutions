class Solution {
public:
    int gcd (int n, int d){

        if(d == 0) return n;
        return gcd(d, n%d);

    }

    void rotate(vector<int>& nums, int k) {

         int length = nums.size();
         if(k >length) k = k%length;
         
         for(int i=1;i<=gcd(length, k);i++){
            
            int temp = nums.at(length-i);
            int j = length - i;
            int d;
            
            while(1){
                d = j-k;
                if(d<0) d = length+d;
                if(d == length-i) break;
                nums.at(j) =  nums.at(d);
                j = d;
            }

        nums.at(j) =  temp;
     }

}
};