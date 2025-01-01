class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // int mini= *min_element(nums.begin(), nums.end());
        // int maxi= *max_element(nums.begin(), nums.end());
        // int avg= (mini+maxi)/2;int ct=0;
        // for(int i=0;i<nums.size();i++){
        //     ct+= abs(avg-nums[i]);
        // }
        // return ct;
        int n = nums.size(), steps = 0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            steps += nums[n-1-i] - nums[i];
        }
        return steps;

    }
};