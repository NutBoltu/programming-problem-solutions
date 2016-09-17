class Solution {
public:
    uint32_t swapBits(uint32_t n, int i,int  j){
        
        int lBit = (n >>i) & 1;
        int hBit = (n >>j) & 1;
        
        if(hBit ^ lBit){
            n ^= ((1U <<i) | (1U <<j));
        }
        
        return n;
    };
    uint32_t reverseBits(uint32_t n) {
    
        int size = sizeof(n)*8;
        
        for(int i=0;i<size/2; i++){
            n = swapBits(n, i, size-i-1);
        }
    
        return n ;
    };
};