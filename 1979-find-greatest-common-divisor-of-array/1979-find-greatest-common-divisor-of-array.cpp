class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum = *min_element(nums.begin(),nums.end());
        int maximum = *max_element(nums.begin(),nums.end());
        return __gcd(minimum,maximum);
    }
};