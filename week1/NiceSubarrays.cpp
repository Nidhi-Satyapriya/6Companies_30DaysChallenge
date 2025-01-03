class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     //m1- hashing   
     int currSum = 0, subarrays = 0;
        unordered_map<int, int> prefixSum;
        prefixSum[currSum] = 1;

        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i] % 2;
            if (prefixSum.find(currSum - k) != prefixSum.end()) {
                subarrays = subarrays + prefixSum[currSum - k];
            }
            prefixSum[currSum]++;
        }
        return subarrays;


    }
};