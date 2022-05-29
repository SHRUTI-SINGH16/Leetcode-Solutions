class Solution {
public:
    int xorOperation(int n, int start) {
        int xora = 0;
        int nums[n];
        for(int i=0;i<n;++i){
            nums[i] = start + 2*i;
            xora = xora^nums[i];
        }
        return xora;
        
    }
};