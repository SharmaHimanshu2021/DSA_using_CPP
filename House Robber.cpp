class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return nums[0];
            int previ = 0, prev, cur;
            prev = nums[0];
            for(int i=1; i<n; i++){
                int take = nums[i];
                if(i>1)
                    take += previ;
                int notTake = prev;
                cur = max(take, notTake);
                previ = prev;
                prev = cur;
            }
            return cur;
    }
    
};
