class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int count = 0;
        for(int i=0;i<candies.size();++i){
            for(int j=0;j<candies.size();++j){
                if(candies[i]+extraCandies>=candies[j]){
                    count++;                    
                }
            }
            if(count==candies.size()){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
            count = 0;
        }
        return ans;
    }
};